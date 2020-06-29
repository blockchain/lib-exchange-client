(ns blockchain/com-exchange-rest-api.specs.deposit-address-crypto
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def deposit-address-crypto-data
  {
   (ds/req :type) string?
   (ds/req :address) string?
   })

(def deposit-address-crypto-spec
  (ds/spec
    {:name ::deposit-address-crypto
     :spec deposit-address-crypto-data}))
