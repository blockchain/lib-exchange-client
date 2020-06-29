(ns blockchain/com-exchange-rest-api.specs.withdrawal-status
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def withdrawal-status-data
  {
   })

(def withdrawal-status-spec
  (ds/spec
    {:name ::withdrawal-status
     :spec withdrawal-status-data}))
