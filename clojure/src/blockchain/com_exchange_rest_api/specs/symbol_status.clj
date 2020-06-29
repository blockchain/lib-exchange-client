(ns blockchain/com-exchange-rest-api.specs.symbol-status
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def symbol-status-data
  {
   (ds/opt :base_currency) string?
   (ds/opt :base_currency_scale) int?
   (ds/opt :counter_currency) string?
   (ds/opt :counter_currency_scale) int?
   (ds/opt :min_price_increment) int?
   (ds/opt :min_price_increment_scale) int?
   (ds/opt :min_order_size) int?
   (ds/opt :min_order_size_scale) int?
   (ds/opt :max_order_size) int?
   (ds/opt :max_order_size_scale) int?
   (ds/opt :lot_size) int?
   (ds/opt :lot_size_scale) int?
   (ds/opt :status) string?
   (ds/opt :id) int?
   (ds/opt :auction_price) float?
   (ds/opt :auction_size) float?
   (ds/opt :auction_time) int?
   (ds/opt :imbalance) float?
   })

(def symbol-status-spec
  (ds/spec
    {:name ::symbol-status
     :spec symbol-status-data}))
