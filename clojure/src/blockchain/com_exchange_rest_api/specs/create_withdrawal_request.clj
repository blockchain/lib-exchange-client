(ns blockchain/com-exchange-rest-api.specs.create-withdrawal-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def create-withdrawal-request-data
  {
   (ds/opt :amount) float?
   (ds/req :currency) string?
   (ds/req :beneficiary) string?
   (ds/opt :sendMax) boolean?
   })

(def create-withdrawal-request-spec
  (ds/spec
    {:name ::create-withdrawal-request
     :spec create-withdrawal-request-data}))
