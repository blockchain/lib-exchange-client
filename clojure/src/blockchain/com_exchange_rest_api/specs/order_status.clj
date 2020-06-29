(ns blockchain/com-exchange-rest-api.specs.order-status
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def order-status-data
  {
   })

(def order-status-spec
  (ds/spec
    {:name ::order-status
     :spec order-status-data}))
