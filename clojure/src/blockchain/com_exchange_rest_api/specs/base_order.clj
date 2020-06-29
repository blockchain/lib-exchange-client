(ns blockchain/com-exchange-rest-api.specs.base-order
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [blockchain/com-exchange-rest-api.specs.side :refer :all]
            [blockchain/com-exchange-rest-api.specs.time-in-force :refer :all]
            )
  (:import (java.io File)))


(def base-order-data
  {
   (ds/opt :ordType) string?
   (ds/req :clOrdId) string?
   (ds/req :symbol) string?
   (ds/req :side) side-spec
   (ds/req :orderQty) float?
   (ds/opt :timeInForce) time-in-force-spec
   (ds/opt :price) float?
   (ds/opt :expireDate) int?
   (ds/opt :minQty) float?
   (ds/opt :stopPx) float?
   })

(def base-order-spec
  (ds/spec
    {:name ::base-order
     :spec base-order-data}))
