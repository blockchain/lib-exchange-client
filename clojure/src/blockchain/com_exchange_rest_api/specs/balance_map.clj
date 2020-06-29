(ns blockchain/com-exchange-rest-api.specs.balance-map
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [blockchain/com-exchange-rest-api.specs.balance :refer :all]
            )
  (:import (java.io File)))


(def balance-map-data
  {
   (ds/req :primary) (s/coll-of balance-spec)
   })

(def balance-map-spec
  (ds/spec
    {:name ::balance-map
     :spec balance-map-data}))
