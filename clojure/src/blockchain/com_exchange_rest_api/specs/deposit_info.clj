(ns blockchain/com-exchange-rest-api.specs.deposit-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def deposit-info-data
  {
   (ds/req :depositId) string?
   (ds/req :amount) float?
   (ds/req :currency) string?
   (ds/req :address) string?
   (ds/opt :txHash) string?
   (ds/req :state) string?
   (ds/opt :timestamp) int?
   })

(def deposit-info-spec
  (ds/spec
    {:name ::deposit-info
     :spec deposit-info-data}))
