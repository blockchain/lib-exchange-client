(ns blockchain/com-exchange-rest-api.specs.price-event
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def price-event-data
  {
   (ds/opt :symbol) string?
   (ds/opt :price_24h) float?
   (ds/opt :volume_24h) float?
   (ds/opt :last_trade_price) float?
   })

(def price-event-spec
  (ds/spec
    {:name ::price-event
     :spec price-event-data}))
