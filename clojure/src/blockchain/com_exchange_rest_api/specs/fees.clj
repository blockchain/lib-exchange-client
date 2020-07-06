(ns blockchain/com-exchange-rest-api.specs.fees
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def fees-data
  {
   (ds/req :makerRate) float?
   (ds/req :takerRate) float?
   (ds/req :volumeInUSD) float?
   })

(def fees-spec
  (ds/spec
    {:name ::fees
     :spec fees-data}))
