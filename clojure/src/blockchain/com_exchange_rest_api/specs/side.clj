(ns blockchain/com-exchange-rest-api.specs.side
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def side-data
  {
   })

(def side-spec
  (ds/spec
    {:name ::side
     :spec side-data}))
