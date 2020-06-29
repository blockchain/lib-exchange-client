(ns blockchain/com-exchange-rest-api.specs.time-in-force-stop
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def time-in-force-stop-data
  {
   })

(def time-in-force-stop-spec
  (ds/spec
    {:name ::time-in-force-stop
     :spec time-in-force-stop-data}))
