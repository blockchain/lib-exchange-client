(ns blockchain/com-exchange-rest-api.specs.cancel-order-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def cancel-order-request-data
  {
   (ds/req :action) string?
   (ds/req :orderID) int?
   })

(def cancel-order-request-spec
  (ds/spec
    {:name ::cancel-order-request
     :spec cancel-order-request-data}))
