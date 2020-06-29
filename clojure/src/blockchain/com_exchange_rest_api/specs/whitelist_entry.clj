(ns blockchain/com-exchange-rest-api.specs.whitelist-entry
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def whitelist-entry-data
  {
   (ds/opt :whitelistId) string?
   (ds/opt :name) string?
   (ds/opt :currency) string?
   })

(def whitelist-entry-spec
  (ds/spec
    {:name ::whitelist-entry
     :spec whitelist-entry-data}))
