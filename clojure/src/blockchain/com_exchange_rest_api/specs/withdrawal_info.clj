(ns blockchain/com-exchange-rest-api.specs.withdrawal-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [blockchain/com-exchange-rest-api.specs.withdrawal-status :refer :all]
            )
  (:import (java.io File)))


(def withdrawal-info-data
  {
   (ds/opt :withdrawalId) string?
   (ds/req :amount) float?
   (ds/opt :fee) float?
   (ds/req :currency) string?
   (ds/req :beneficiary) string?
   (ds/opt :state) withdrawal-status-spec
   (ds/opt :timestamp) int?
   })

(def withdrawal-info-spec
  (ds/spec
    {:name ::withdrawal-info
     :spec withdrawal-info-data}))
