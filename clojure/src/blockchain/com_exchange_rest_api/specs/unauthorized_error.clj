(ns blockchain/com-exchange-rest-api.specs.unauthorized-error
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def unauthorized-error-data
  {
   (ds/opt :error) string?
   })

(def unauthorized-error-spec
  (ds/spec
    {:name ::unauthorized-error
     :spec unauthorized-error-data}))
