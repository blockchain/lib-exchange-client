(defproject blockchain/com-exchange-rest-api "1.0.0"
  :description "## Introduction
Welcome to Blockchain.com's Exchange API and developer documentation. These documents detail and give examples of various functionality offered by the API such as receiving real time market data, requesting balance information and performing trades.
## To Get Started
Create or log into your existing Blockchain.com Exchange account
Select API from the drop down menu
Fill out form and click “Create New API Key Now”
Once generated you can view your keys under API Settings"
  :dependencies [[org.clojure/clojure "1.9.0"]
                 [metosin/spec-tools "0.7.0"]
                 [clj-http "3.8.0"]
                 [orchestra "2017.11.12-1"]
                 [cheshire "5.8.0"]])