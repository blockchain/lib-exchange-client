use std::rc::Rc;

use hyper;
use super::configuration::Configuration;

pub struct APIClient {
    payments_api: Box<dyn crate::apis::PaymentsApi>,
    trading_api: Box<dyn crate::apis::TradingApi>,
    unauthenticated_api: Box<dyn crate::apis::UnauthenticatedApi>,
}

impl APIClient {
    pub fn new<C: hyper::client::Connect>(configuration: Configuration<C>) -> APIClient {
        let rc = Rc::new(configuration);

        APIClient {
            payments_api: Box::new(crate::apis::PaymentsApiClient::new(rc.clone())),
            trading_api: Box::new(crate::apis::TradingApiClient::new(rc.clone())),
            unauthenticated_api: Box::new(crate::apis::UnauthenticatedApiClient::new(rc.clone())),
        }
    }

    pub fn payments_api(&self) -> &dyn crate::apis::PaymentsApi{
        self.payments_api.as_ref()
    }

    pub fn trading_api(&self) -> &dyn crate::apis::TradingApi{
        self.trading_api.as_ref()
    }

    pub fn unauthenticated_api(&self) -> &dyn crate::apis::UnauthenticatedApi{
        self.unauthenticated_api.as_ref()
    }

}
