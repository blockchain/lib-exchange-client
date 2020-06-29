(ns blockchain/com-exchange-rest-api.specs.balance
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def balance-data
  {
   (ds/req :currency) string?
   (ds/req :balance) float?
   (ds/req :available) float?
   (ds/req :balance_local) float?
   (ds/req :available_local) float?
   (ds/req :rate) float?
   })

(def balance-spec
  (ds/spec
    {:name ::balance
     :spec balance-data}))
