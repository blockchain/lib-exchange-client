(ns blockchain/com-exchange-rest-api.specs.price-event-list
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [blockchain/com-exchange-rest-api.specs.price-event :refer :all]
            )
  (:import (java.io File)))


(def price-event-list-data
  {
   (ds/opt :orders) (s/coll-of price-event-spec)
   })

(def price-event-list-spec
  (ds/spec
    {:name ::price-event-list
     :spec price-event-list-data}))
