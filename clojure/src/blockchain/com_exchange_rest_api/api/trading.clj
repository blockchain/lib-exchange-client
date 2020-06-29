(ns blockchain/com-exchange-rest-api.api.trading
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


(defn-spec create-order-with-http-info any?
  "Add an order"
  [base-order base-order]
  (check-required-params base-order)
  (call-api "/orders" :post
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    base-order
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec create-order order-summary-spec
  "Add an order"
  [base-order base-order]
  (let [res (:data (create-order-with-http-info base-order))]
    (if (:decode-models *api-context*)
       (st/decode order-summary-spec res st/string-transformer)
       res)))


(defn-spec delete-all-orders-with-http-info any?
  "Delete all open orders (of a symbol, if specified)"
  ([] (delete-all-orders-with-http-info nil))
  ([{:keys [symbol]} (s/map-of keyword? any?)]
   (call-api "/orders" :delete
             {:path-params   {}
              :header-params {}
              :query-params  {"symbol" symbol }
              :form-params   {}
              :content-types []
              :accepts       []
              :auth-names    ["ApiKeyAuth"]})))

(defn-spec delete-all-orders any?
  "Delete all open orders (of a symbol, if specified)"
  ([] (delete-all-orders nil))
  ([optional-params any?]
   (let [res (:data (delete-all-orders-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode any? res st/string-transformer)
        res))))


(defn-spec delete-order-with-http-info any?
  "Cancel a trade"
  [orderId int?]
  (check-required-params orderId)
  (call-api "/orders/{orderId}" :delete
            {:path-params   {"orderId" orderId }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       []
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec delete-order any?
  "Cancel a trade"
  [orderId int?]
  (let [res (:data (delete-order-with-http-info orderId))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec get-fees-with-http-info any?
  "Get current fee level"
  []
  (call-api "/fees" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec get-fees fees-spec
  "Get current fee level"
  []
  (let [res (:data (get-fees-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode fees-spec res st/string-transformer)
       res)))


(defn-spec get-order-by-id-with-http-info any?
  "Get a specific order"
  [orderId int?]
  (check-required-params orderId)
  (call-api "/orders/{orderId}" :get
            {:path-params   {"orderId" orderId }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec get-order-by-id order-summary-spec
  "Get a specific order"
  [orderId int?]
  (let [res (:data (get-order-by-id-with-http-info orderId))]
    (if (:decode-models *api-context*)
       (st/decode order-summary-spec res st/string-transformer)
       res)))


(defn-spec get-orders-with-http-info any?
  "Get a list orders
  Returns live and historic orders, defaulting to live orders. Returns at most 50 results, use pagination to return further results"
  ([] (get-orders-with-http-info nil))
  ([{:keys [symbol from to status page]} (s/map-of keyword? any?)]
   (call-api "/orders" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"symbol" symbol "from" from "to" to "status" status "page" page }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["ApiKeyAuth"]})))

(defn-spec get-orders (s/coll-of order-summary-spec)
  "Get a list orders
  Returns live and historic orders, defaulting to live orders. Returns at most 50 results, use pagination to return further results"
  ([] (get-orders nil))
  ([optional-params any?]
   (let [res (:data (get-orders-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode (s/coll-of order-summary-spec) res st/string-transformer)
        res))))


