(ns blockchain/com-exchange-rest-api.specs.order-book-entry
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def order-book-entry-data
  {
   (ds/opt :px) float?
   (ds/opt :qty) float?
   (ds/opt :num) int?
   })

(def order-book-entry-spec
  (ds/spec
    {:name ::order-book-entry
     :spec order-book-entry-data}))
