(ns blockchain/com-exchange-rest-api.api.unauthenticated
  (:require [blockchain/com-exchange-rest-api.core :refer [call-api check-required-params with-collection-format *api-context*]]
            [clojure.spec.alpha :as s]
            [spec-tools.core :as st]
            [orchestra.core :refer [defn-spec]]
            [blockchain/com-exchange-rest-api.specs.symbol :refer :all]
            [blockchain/com-exchange-rest-api.specs.time-in-force :refer :all]
            [blockchain/com-exchange-rest-api.specs.fees :refer :all]
            [blockchain/com-exchange-rest-api.specs.order-book :refer :all]
            [blockchain/com-exchange-rest-api.specs.symbol-status :refer :all]
            [blockchain/com-exchange-rest-api.specs.create-withdrawal-request :refer :all]
            [blockchain/com-exchange-rest-api.specs.order-status :refer :all]
            [blockchain/com-exchange-rest-api.specs.cancel-order-request :refer :all]
            [blockchain/com-exchange-rest-api.specs.exchange-order-id :refer :all]
            [blockchain/com-exchange-rest-api.specs.timestamp-epoch :refer :all]
            [blockchain/com-exchange-rest-api.specs.whitelist-entry :refer :all]
            [blockchain/com-exchange-rest-api.specs.withdrawal-info :refer :all]
            [blockchain/com-exchange-rest-api.specs.withdrawal-status :refer :all]
            [blockchain/com-exchange-rest-api.specs.balance :refer :all]
            [blockchain/com-exchange-rest-api.specs.deposit-address-crypto :refer :all]
            [blockchain/com-exchange-rest-api.specs.price :refer :all]
            [blockchain/com-exchange-rest-api.specs.ord-type :refer :all]
            [blockchain/com-exchange-rest-api.specs.price-event :refer :all]
            [blockchain/com-exchange-rest-api.specs.currency :refer :all]
            [blockchain/com-exchange-rest-api.specs.stop-px :refer :all]
            [blockchain/com-exchange-rest-api.specs.client-order-id :refer :all]
            [blockchain/com-exchange-rest-api.specs.withdrawal-id :refer :all]
            [blockchain/com-exchange-rest-api.specs.order-qty :refer :all]
            [blockchain/com-exchange-rest-api.specs.expire-date :refer :all]
            [blockchain/com-exchange-rest-api.specs.deposit-info :refer :all]
            [blockchain/com-exchange-rest-api.specs.side :refer :all]
            [blockchain/com-exchange-rest-api.specs.withdrawal-fee :refer :all]
            [blockchain/com-exchange-rest-api.specs.min-qty :refer :all]
            [blockchain/com-exchange-rest-api.specs.order-book-entry :refer :all]
            [blockchain/com-exchange-rest-api.specs.deposit-amount :refer :all]
            [blockchain/com-exchange-rest-api.specs.order-summary :refer :all]
            [blockchain/com-exchange-rest-api.specs.deposit-id :refer :all]
            [blockchain/com-exchange-rest-api.specs.crypto-address :refer :all]
            [blockchain/com-exchange-rest-api.specs.price-event-list :refer :all]
            [blockchain/com-exchange-rest-api.specs.unauthorized-error :refer :all]
            [blockchain/com-exchange-rest-api.specs.time-in-force-stop :refer :all]
            [blockchain/com-exchange-rest-api.specs.base-order :refer :all]
            [blockchain/com-exchange-rest-api.specs.withdrawal-amount :refer :all]
            [blockchain/com-exchange-rest-api.specs.balance-map :refer :all]
            [blockchain/com-exchange-rest-api.specs.withdrawal-beneficiary :refer :all]
            [blockchain/com-exchange-rest-api.specs.exec-inst :refer :all]
            )
  (:import (java.io File)))


(defn-spec get-l2-order-book-with-http-info any?
  "L2 Order Book
  Level 2 Order Book data is available through the l2 channel. Each entry in bids and asks arrays is a price level, along with its price (px), quantity (qty) and number of orders (num) attributes."
  [symbol string?]
  (check-required-params symbol)
  (call-api "/l2/{symbol}" :get
            {:path-params   {"symbol" symbol }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec get-l2-order-book order-book-spec
  "L2 Order Book
  Level 2 Order Book data is available through the l2 channel. Each entry in bids and asks arrays is a price level, along with its price (px), quantity (qty) and number of orders (num) attributes."
  [symbol string?]
  (let [res (:data (get-l2-order-book-with-http-info symbol))]
    (if (:decode-models *api-context*)
       (st/decode order-book-spec res st/string-transformer)
       res)))


(defn-spec get-l3-order-book-with-http-info any?
  "L3 Order Book
  Level 3 Order Book data is available through the l3 channel. Each entry in bids and asks arrays is an order, along with its id (id), price (px) and quantity (qty) attributes. In contrast to the L2 order book, the L3 order book contains all individual orders without aggregation."
  [symbol string?]
  (check-required-params symbol)
  (call-api "/l3/{symbol}" :get
            {:path-params   {"symbol" symbol }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec get-l3-order-book order-book-spec
  "L3 Order Book
  Level 3 Order Book data is available through the l3 channel. Each entry in bids and asks arrays is an order, along with its id (id), price (px) and quantity (qty) attributes. In contrast to the L2 order book, the L3 order book contains all individual orders without aggregation."
  [symbol string?]
  (let [res (:data (get-l3-order-book-with-http-info symbol))]
    (if (:decode-models *api-context*)
       (st/decode order-book-spec res st/string-transformer)
       res)))


(defn-spec get-symbol-by-name-with-http-info any?
  "Symbols
  When the symbol is not halted the auction data in the message may be blank.
When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way."
  [symbol string?]
  (check-required-params symbol)
  (call-api "/symbols/{symbol}" :get
            {:path-params   {"symbol" symbol }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec get-symbol-by-name symbol-status-spec
  "Symbols
  When the symbol is not halted the auction data in the message may be blank.
When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way."
  [symbol string?]
  (let [res (:data (get-symbol-by-name-with-http-info symbol))]
    (if (:decode-models *api-context*)
       (st/decode symbol-status-spec res st/string-transformer)
       res)))


(defn-spec get-symbols-with-http-info any?
  "Symbols
  When the symbol is not halted the auction data in the message may be blank.
When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way."
  []
  (call-api "/symbols" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec get-symbols (s/map-of string? symbol-status-spec)
  "Symbols
  When the symbol is not halted the auction data in the message may be blank.
When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way."
  []
  (let [res (:data (get-symbols-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode (s/map-of string? symbol-status-spec) res st/string-transformer)
       res)))


(defn-spec get-ticker-by-symbol-with-http-info any?
  "Price"
  [symbol string?]
  (check-required-params symbol)
  (call-api "/tickers/{symbol}" :get
            {:path-params   {"symbol" symbol }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec get-ticker-by-symbol price-event-spec
  "Price"
  [symbol string?]
  (let [res (:data (get-ticker-by-symbol-with-http-info symbol))]
    (if (:decode-models *api-context*)
       (st/decode price-event-spec res st/string-transformer)
       res)))


(defn-spec get-tickers-with-http-info any?
  "Price"
  []
  (call-api "/tickers" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec get-tickers (s/coll-of price-event-spec)
  "Price"
  []
  (let [res (:data (get-tickers-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of price-event-spec) res st/string-transformer)
       res)))


