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

    inline arma::mat orthogonal_complement_matrix_TW(const arma::mat& x) {
        typedef SEXP(*Ptr_orthogonal_complement_matrix_TW)(SEXP);
        static Ptr_orthogonal_complement_matrix_TW p_orthogonal_complement_matrix_TW = NULL;
        if (p_orthogonal_complement_matrix_TW == NULL) {
            validateSignature("arma::mat(*orthogonal_complement_matrix_TW)(const arma::mat&)");
            p_orthogonal_complement_matrix_TW = (Ptr_orthogonal_complement_matrix_TW)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_orthogonal_complement_matrix_TW");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_orthogonal_complement_matrix_TW(Shield<SEXP>(Rcpp::wrap(x)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline std::string ordinal(int n) {
        typedef SEXP(*Ptr_ordinal)(SEXP);
        static Ptr_ordinal p_ordinal = NULL;
        if (p_ordinal == NULL) {
            validateSignature("std::string(*ordinal)(int)");
            p_ordinal = (Ptr_ordinal)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_ordinal");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ordinal(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::string >(rcpp_result_gen);
    }

    inline void sample_hyperparameters(arma::mat& aux_hyper, const arma::mat& aux_B, const arma::mat& aux_A, const arma::field<arma::mat>& VB, const Rcpp::List& prior) {
        typedef SEXP(*Ptr_sample_hyperparameters)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_sample_hyperparameters p_sample_hyperparameters = NULL;
        if (p_sample_hyperparameters == NULL) {
            validateSignature("void(*sample_hyperparameters)(arma::mat&,const arma::mat&,const arma::mat&,const arma::field<arma::mat>&,const Rcpp::List&)");
            p_sample_hyperparameters = (Ptr_sample_hyperparameters)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_sample_hyperparameters");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_sample_hyperparameters(Shield<SEXP>(Rcpp::wrap(aux_hyper)), Shield<SEXP>(Rcpp::wrap(aux_B)), Shield<SEXP>(Rcpp::wrap(aux_A)), Shield<SEXP>(Rcpp::wrap(VB)), Shield<SEXP>(Rcpp::wrap(prior)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

    inline void sample_A_homosk1(arma::mat& aux_A, const arma::mat& aux_B, const arma::mat& aux_hyper, const arma::mat& Y, const arma::mat& X, const Rcpp::List& prior) {
        typedef SEXP(*Ptr_sample_A_homosk1)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_sample_A_homosk1 p_sample_A_homosk1 = NULL;
        if (p_sample_A_homosk1 == NULL) {
            validateSignature("void(*sample_A_homosk1)(arma::mat&,const arma::mat&,const arma::mat&,const arma::mat&,const arma::mat&,const Rcpp::List&)");
            p_sample_A_homosk1 = (Ptr_sample_A_homosk1)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_sample_A_homosk1");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_sample_A_homosk1(Shield<SEXP>(Rcpp::wrap(aux_A)), Shield<SEXP>(Rcpp::wrap(aux_B)), Shield<SEXP>(Rcpp::wrap(aux_hyper)), Shield<SEXP>(Rcpp::wrap(Y)), Shield<SEXP>(Rcpp::wrap(X)), Shield<SEXP>(Rcpp::wrap(prior)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

    inline void sample_B_homosk1(arma::mat& aux_B, const arma::mat& aux_A, const arma::mat& aux_hyper, const arma::mat& Y, const arma::mat& X, const Rcpp::List& prior, const arma::field<arma::mat>& VB) {
        typedef SEXP(*Ptr_sample_B_homosk1)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_sample_B_homosk1 p_sample_B_homosk1 = NULL;
        if (p_sample_B_homosk1 == NULL) {
            validateSignature("void(*sample_B_homosk1)(arma::mat&,const arma::mat&,const arma::mat&,const arma::mat&,const arma::mat&,const Rcpp::List&,const arma::field<arma::mat>&)");
            p_sample_B_homosk1 = (Ptr_sample_B_homosk1)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_sample_B_homosk1");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_sample_B_homosk1(Shield<SEXP>(Rcpp::wrap(aux_B)), Shield<SEXP>(Rcpp::wrap(aux_A)), Shield<SEXP>(Rcpp::wrap(aux_hyper)), Shield<SEXP>(Rcpp::wrap(Y)), Shield<SEXP>(Rcpp::wrap(X)), Shield<SEXP>(Rcpp::wrap(prior)), Shield<SEXP>(Rcpp::wrap(VB)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

    inline Rcpp::List bsvar_sign_cpp(const int& S, const arma::mat& Y, const arma::mat& X, const arma::field<arma::mat>& VB, const Rcpp::List& prior, const Rcpp::List& starting_values, const int thin = 100, const bool show_progress = true) {
        typedef SEXP(*Ptr_bsvar_sign_cpp)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_bsvar_sign_cpp p_bsvar_sign_cpp = NULL;
        if (p_bsvar_sign_cpp == NULL) {
            validateSignature("Rcpp::List(*bsvar_sign_cpp)(const int&,const arma::mat&,const arma::mat&,const arma::field<arma::mat>&,const Rcpp::List&,const Rcpp::List&,const int,const bool)");
            p_bsvar_sign_cpp = (Ptr_bsvar_sign_cpp)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_bsvar_sign_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_bsvar_sign_cpp(Shield<SEXP>(Rcpp::wrap(S)), Shield<SEXP>(Rcpp::wrap(Y)), Shield<SEXP>(Rcpp::wrap(X)), Shield<SEXP>(Rcpp::wrap(VB)), Shield<SEXP>(Rcpp::wrap(prior)), Shield<SEXP>(Rcpp::wrap(starting_values)), Shield<SEXP>(Rcpp::wrap(thin)), Shield<SEXP>(Rcpp::wrap(show_progress)));
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
