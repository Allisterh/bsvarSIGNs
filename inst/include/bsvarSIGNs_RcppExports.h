// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_bsvarSIGNs_RCPPEXPORTS_H_GEN_
#define RCPP_bsvarSIGNs_RCPPEXPORTS_H_GEN_

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace bsvarSIGNs {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("bsvarSIGNs", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in bsvarSIGNs");
            }
        }
    }

    inline bool match_sign_cpp(const arma::mat& A, const arma::mat sign) {
        typedef SEXP(*Ptr_match_sign_cpp)(SEXP,SEXP);
        static Ptr_match_sign_cpp p_match_sign_cpp = NULL;
        if (p_match_sign_cpp == NULL) {
            validateSignature("bool(*match_sign_cpp)(const arma::mat&,const arma::mat)");
            p_match_sign_cpp = (Ptr_match_sign_cpp)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_match_sign_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_match_sign_cpp(Shield<SEXP>(Rcpp::wrap(A)), Shield<SEXP>(Rcpp::wrap(sign)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<bool >(rcpp_result_gen);
    }

    inline Rcpp::List bsvar_sign_cpp(const int& S, const int& lags, const arma::mat& Y, const arma::mat& X, const arma::field<arma::mat>& VB, const arma::cube& sign_irf, const arma::mat& sign_hd, const Rcpp::List& prior, const Rcpp::List& starting_values, const int thin = 100, const bool show_progress = true) {
        typedef SEXP(*Ptr_bsvar_sign_cpp)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_bsvar_sign_cpp p_bsvar_sign_cpp = NULL;
        if (p_bsvar_sign_cpp == NULL) {
            validateSignature("Rcpp::List(*bsvar_sign_cpp)(const int&,const int&,const arma::mat&,const arma::mat&,const arma::field<arma::mat>&,const arma::cube&,const arma::mat&,const Rcpp::List&,const Rcpp::List&,const int,const bool)");
            p_bsvar_sign_cpp = (Ptr_bsvar_sign_cpp)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_bsvar_sign_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_bsvar_sign_cpp(Shield<SEXP>(Rcpp::wrap(S)), Shield<SEXP>(Rcpp::wrap(lags)), Shield<SEXP>(Rcpp::wrap(Y)), Shield<SEXP>(Rcpp::wrap(X)), Shield<SEXP>(Rcpp::wrap(VB)), Shield<SEXP>(Rcpp::wrap(sign_irf)), Shield<SEXP>(Rcpp::wrap(sign_hd)), Shield<SEXP>(Rcpp::wrap(prior)), Shield<SEXP>(Rcpp::wrap(starting_values)), Shield<SEXP>(Rcpp::wrap(thin)), Shield<SEXP>(Rcpp::wrap(show_progress)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

}

#endif // RCPP_bsvarSIGNs_RCPPEXPORTS_H_GEN_
