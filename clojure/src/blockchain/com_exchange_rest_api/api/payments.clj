(ns blockchain/com-exchange-rest-api.api.payments
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


(defn-spec create-withdrawal-with-http-info any?
  "Request a withdrawal
  Call `GET /whitelist` first to retrieve the ID of the beneficiary. To add a beneficiary to the whitelist, please visit the profile page in the Exchange. This call only works if 2FA is enabled on the account."
  [create-withdrawal-request create-withdrawal-request]
  (check-required-params create-withdrawal-request)
  (call-api "/withdrawals" :post
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    create-withdrawal-request
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec create-withdrawal withdrawal-info-spec
  "Request a withdrawal
  Call `GET /whitelist` first to retrieve the ID of the beneficiary. To add a beneficiary to the whitelist, please visit the profile page in the Exchange. This call only works if 2FA is enabled on the account."
  [create-withdrawal-request create-withdrawal-request]
  (let [res (:data (create-withdrawal-with-http-info create-withdrawal-request))]
    (if (:decode-models *api-context*)
       (st/decode withdrawal-info-spec res st/string-transformer)
       res)))


(defn-spec get-account-by-type-and-currency-with-http-info any?
  "Receive current account balances"
  [account string?, currency string?]
  (check-required-params account currency)
  (call-api "/accounts/{account}/{currency}" :get
            {:path-params   {"account" account "currency" currency }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec get-account-by-type-and-currency balance-spec
  "Receive current account balances"
  [account string?, currency string?]
  (let [res (:data (get-account-by-type-and-currency-with-http-info account currency))]
    (if (:decode-models *api-context*)
       (st/decode balance-spec res st/string-transformer)
       res)))


(defn-spec get-accounts-with-http-info any?
  "Receive current account balances"
  []
  (call-api "/accounts" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec get-accounts balance-map-spec
  "Receive current account balances"
  []
  (let [res (:data (get-accounts-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode balance-map-spec res st/string-transformer)
       res)))


(defn-spec get-deposit-address-with-http-info any?
  "Get a deposit address. Currently only crypto currencies are supported"
  [currency string?]
  (check-required-params currency)
  (call-api "/deposits/{currency}" :post
            {:path-params   {"currency" currency }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec get-deposit-address deposit-address-crypto-spec
  "Get a deposit address. Currently only crypto currencies are supported"
  [currency string?]
  (let [res (:data (get-deposit-address-with-http-info currency))]
    (if (:decode-models *api-context*)
       (st/decode deposit-address-crypto-spec res st/string-transformer)
       res)))


(defn-spec get-deposit-by-id-with-http-info any?
  "Get status about a deposit"
  [depositId string?]
  (check-required-params depositId)
  (call-api "/deposits/{depositId}" :get
            {:path-params   {"depositId" depositId }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec get-deposit-by-id deposit-info-spec
  "Get status about a deposit"
  [depositId string?]
  (let [res (:data (get-deposit-by-id-with-http-info depositId))]
    (if (:decode-models *api-context*)
       (st/decode deposit-info-spec res st/string-transformer)
       res)))


(defn-spec get-deposits-with-http-info any?
  "Get a list of deposits"
  ([] (get-deposits-with-http-info nil))
  ([{:keys [from to]} (s/map-of keyword? any?)]
   (call-api "/deposits" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"from" from "to" to }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["ApiKeyAuth"]})))

(defn-spec get-deposits (s/coll-of deposit-info-spec)
  "Get a list of deposits"
  ([] (get-deposits nil))
  ([optional-params any?]
   (let [res (:data (get-deposits-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode (s/coll-of deposit-info-spec) res st/string-transformer)
        res))))


(defn-spec get-whitelist-with-http-info any?
  "Get a list of all whitelisted withdrawal accounts"
  []
  (call-api "/whitelist" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec get-whitelist (s/coll-of whitelist-entry-spec)
  "Get a list of all whitelisted withdrawal accounts"
  []
  (let [res (:data (get-whitelist-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of whitelist-entry-spec) res st/string-transformer)
       res)))


(defn-spec get-whitelist-by-currency-with-http-info any?
  "Get a list of all whitelisted withdrawal accounts"
  [currency string?]
  (check-required-params currency)
  (call-api "/whitelist/{currency}" :get
            {:path-params   {"currency" currency }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec get-whitelist-by-currency (s/coll-of whitelist-entry-spec)
  "Get a list of all whitelisted withdrawal accounts"
  [currency string?]
  (let [res (:data (get-whitelist-by-currency-with-http-info currency))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of whitelist-entry-spec) res st/string-transformer)
       res)))


(defn-spec get-withdrawal-by-id-with-http-info any?
  "Get status about a withdrawal"
  [withdrawalId string?]
  (check-required-params withdrawalId)
  (call-api "/withdrawals/{withdrawalId}" :get
            {:path-params   {"withdrawalId" withdrawalId }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["ApiKeyAuth"]}))

(defn-spec get-withdrawal-by-id withdrawal-info-spec
  "Get status about a withdrawal"
  [withdrawalId string?]
  (let [res (:data (get-withdrawal-by-id-with-http-info withdrawalId))]
    (if (:decode-models *api-context*)
       (st/decode withdrawal-info-spec res st/string-transformer)
       res)))


(defn-spec get-withdrawals-with-http-info any?
  "Get a list of withdrawals"
  ([] (get-withdrawals-with-http-info nil))
  ([{:keys [from to]} (s/map-of keyword? any?)]
   (call-api "/withdrawals" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"from" from "to" to }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["ApiKeyAuth"]})))

(defn-spec get-withdrawals (s/coll-of withdrawal-info-spec)
  "Get a list of withdrawals"
  ([] (get-withdrawals nil))
  ([optional-params any?]
   (let [res (:data (get-withdrawals-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode (s/coll-of withdrawal-info-spec) res st/string-transformer)
        res))))


