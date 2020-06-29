(ns blockchain/com-exchange-rest-api.specs.order-summary
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [blockchain/com-exchange-rest-api.specs.order-status :refer :all]
            )
  (:import (java.io File)))


(def order-summary-data
  {
   (ds/opt :exOrdId) int?
   (ds/opt :clOrdId) string?
   (ds/opt :ordStatus) order-status-spec
   (ds/opt :text) string?
   (ds/opt :symbol) string?
   (ds/opt :lastShares) float?
   (ds/opt :lastPx) float?
   (ds/opt :leavesQty) float?
   (ds/opt :cumQty) float?
   (ds/opt :avgPx) float?
   (ds/opt :timestamp) int?
   })

(def order-summary-spec
  (ds/spec
    {:name ::order-summary
     :spec order-summary-data}))
