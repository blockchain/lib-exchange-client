(ns blockchain/com-exchange-rest-api.specs.order-book
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [blockchain/com-exchange-rest-api.specs.order-book-entry :refer :all]
            [blockchain/com-exchange-rest-api.specs.order-book-entry :refer :all]
            )
  (:import (java.io File)))


(def order-book-data
  {
   (ds/opt :symbol) string?
   (ds/opt :bids) (s/coll-of order-book-entry-spec)
   (ds/opt :asks) (s/coll-of order-book-entry-spec)
   })

(def order-book-spec
  (ds/spec
    {:name ::order-book
     :spec order-book-data}))
