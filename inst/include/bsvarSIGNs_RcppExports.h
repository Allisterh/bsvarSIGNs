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

    inline arma::cube ir11_cpp(arma::mat& irf_0, arma::mat& aux_A, const int horizon, const int p, const bool standardise = false) {
        typedef SEXP(*Ptr_ir11_cpp)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ir11_cpp p_ir11_cpp = NULL;
        if (p_ir11_cpp == NULL) {
            validateSignature("arma::cube(*ir11_cpp)(arma::mat&,arma::mat&,const int,const int,const bool)");
            p_ir11_cpp = (Ptr_ir11_cpp)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_ir11_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ir11_cpp(Shield<SEXP>(Rcpp::wrap(irf_0)), Shield<SEXP>(Rcpp::wrap(aux_A)), Shield<SEXP>(Rcpp::wrap(horizon)), Shield<SEXP>(Rcpp::wrap(p)), Shield<SEXP>(Rcpp::wrap(standardise)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::cube >(rcpp_result_gen);
    }

    inline arma::cube ir1_cpp(const arma::mat& A, const arma::mat& chol_SIGMA, int horizon, const int& p) {
        typedef SEXP(*Ptr_ir1_cpp)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_ir1_cpp p_ir1_cpp = NULL;
        if (p_ir1_cpp == NULL) {
            validateSignature("arma::cube(*ir1_cpp)(const arma::mat&,const arma::mat&,int,const int&)");
            p_ir1_cpp = (Ptr_ir1_cpp)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_ir1_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ir1_cpp(Shield<SEXP>(Rcpp::wrap(A)), Shield<SEXP>(Rcpp::wrap(chol_SIGMA)), Shield<SEXP>(Rcpp::wrap(horizon)), Shield<SEXP>(Rcpp::wrap(p)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::cube >(rcpp_result_gen);
    }

    inline Rcpp::List bsvar_sign_cpp(const int& S, const int& lags, const arma::mat& Y, const arma::mat& X, const arma::field<arma::mat>& VB, const arma::cube& sign_irf, const arma::mat& sign_narrative, const arma::mat& sign_B, const arma::field<arma::mat>& Z, const Rcpp::List& prior, const Rcpp::List& starting_values, const int thin = 100, const bool show_progress = true, const int& max_tries = 10000) {
        typedef SEXP(*Ptr_bsvar_sign_cpp)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_bsvar_sign_cpp p_bsvar_sign_cpp = NULL;
        if (p_bsvar_sign_cpp == NULL) {
            validateSignature("Rcpp::List(*bsvar_sign_cpp)(const int&,const int&,const arma::mat&,const arma::mat&,const arma::field<arma::mat>&,const arma::cube&,const arma::mat&,const arma::mat&,const arma::field<arma::mat>&,const Rcpp::List&,const Rcpp::List&,const int,const bool,const int&)");
            p_bsvar_sign_cpp = (Ptr_bsvar_sign_cpp)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_bsvar_sign_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_bsvar_sign_cpp(Shield<SEXP>(Rcpp::wrap(S)), Shield<SEXP>(Rcpp::wrap(lags)), Shield<SEXP>(Rcpp::wrap(Y)), Shield<SEXP>(Rcpp::wrap(X)), Shield<SEXP>(Rcpp::wrap(VB)), Shield<SEXP>(Rcpp::wrap(sign_irf)), Shield<SEXP>(Rcpp::wrap(sign_narrative)), Shield<SEXP>(Rcpp::wrap(sign_B)), Shield<SEXP>(Rcpp::wrap(Z)), Shield<SEXP>(Rcpp::wrap(prior)), Shield<SEXP>(Rcpp::wrap(starting_values)), Shield<SEXP>(Rcpp::wrap(thin)), Shield<SEXP>(Rcpp::wrap(show_progress)), Shield<SEXP>(Rcpp::wrap(max_tries)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline bool match_sign(const arma::mat& A, const arma::mat& sign) {
        typedef SEXP(*Ptr_match_sign)(SEXP,SEXP);
        static Ptr_match_sign p_match_sign = NULL;
        if (p_match_sign == NULL) {
            validateSignature("bool(*match_sign)(const arma::mat&,const arma::mat&)");
            p_match_sign = (Ptr_match_sign)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_match_sign");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_match_sign(Shield<SEXP>(Rcpp::wrap(A)), Shield<SEXP>(Rcpp::wrap(sign)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<bool >(rcpp_result_gen);
    }

    inline bool match_sign_irf(const arma::mat& Q, const arma::cube& sign_irf, const arma::cube& irf) {
        typedef SEXP(*Ptr_match_sign_irf)(SEXP,SEXP,SEXP);
        static Ptr_match_sign_irf p_match_sign_irf = NULL;
        if (p_match_sign_irf == NULL) {
            validateSignature("bool(*match_sign_irf)(const arma::mat&,const arma::cube&,const arma::cube&)");
            p_match_sign_irf = (Ptr_match_sign_irf)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_match_sign_irf");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_match_sign_irf(Shield<SEXP>(Rcpp::wrap(Q)), Shield<SEXP>(Rcpp::wrap(sign_irf)), Shield<SEXP>(Rcpp::wrap(irf)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<bool >(rcpp_result_gen);
    }

    inline arma::mat hd1(const int& var_i, const int& t, const int& h, const arma::mat& U, const arma::cube& irf) {
        typedef SEXP(*Ptr_hd1)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_hd1 p_hd1 = NULL;
        if (p_hd1 == NULL) {
            validateSignature("arma::mat(*hd1)(const int&,const int&,const int&,const arma::mat&,const arma::cube&)");
            p_hd1 = (Ptr_hd1)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_hd1");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_hd1(Shield<SEXP>(Rcpp::wrap(var_i)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(h)), Shield<SEXP>(Rcpp::wrap(U)), Shield<SEXP>(Rcpp::wrap(irf)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline bool match_sign_narrative(const arma::mat& U, const arma::mat& sign_narrative, const arma::cube& irf) {
        typedef SEXP(*Ptr_match_sign_narrative)(SEXP,SEXP,SEXP);
        static Ptr_match_sign_narrative p_match_sign_narrative = NULL;
        if (p_match_sign_narrative == NULL) {
            validateSignature("bool(*match_sign_narrative)(const arma::mat&,const arma::mat&,const arma::cube&)");
            p_match_sign_narrative = (Ptr_match_sign_narrative)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_match_sign_narrative");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_match_sign_narrative(Shield<SEXP>(Rcpp::wrap(U)), Shield<SEXP>(Rcpp::wrap(sign_narrative)), Shield<SEXP>(Rcpp::wrap(irf)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<bool >(rcpp_result_gen);
    }

    inline double approximate_w(const int& T, arma::mat sign_narrative, const arma::cube& irf) {
        typedef SEXP(*Ptr_approximate_w)(SEXP,SEXP,SEXP);
        static Ptr_approximate_w p_approximate_w = NULL;
        if (p_approximate_w == NULL) {
            validateSignature("double(*approximate_w)(const int&,arma::mat,const arma::cube&)");
            p_approximate_w = (Ptr_approximate_w)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_approximate_w");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_approximate_w(Shield<SEXP>(Rcpp::wrap(T)), Shield<SEXP>(Rcpp::wrap(sign_narrative)), Shield<SEXP>(Rcpp::wrap(irf)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline void rzeroQ(const arma::field<arma::mat>& Z, const arma::cube irf) {
        typedef SEXP(*Ptr_rzeroQ)(SEXP,SEXP);
        static Ptr_rzeroQ p_rzeroQ = NULL;
        if (p_rzeroQ == NULL) {
            validateSignature("void(*rzeroQ)(const arma::field<arma::mat>&,const arma::cube)");
            p_rzeroQ = (Ptr_rzeroQ)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_rzeroQ");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rzeroQ(Shield<SEXP>(Rcpp::wrap(Z)), Shield<SEXP>(Rcpp::wrap(irf)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

    inline arma::mat sample_Q(const int& lags, const arma::mat& Y, const arma::mat& X, double& aux_w, arma::mat& aux_A, arma::mat& aux_B, arma::mat& chol_SIGMA, const Rcpp::List& prior, const arma::field<arma::mat>& VB, const arma::cube& sign_irf, const arma::mat& sign_narrative, const arma::mat& sign_B, const arma::field<arma::mat>& Z, const int& max_tries, bool& success) {
        typedef SEXP(*Ptr_sample_Q)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_sample_Q p_sample_Q = NULL;
        if (p_sample_Q == NULL) {
            validateSignature("arma::mat(*sample_Q)(const int&,const arma::mat&,const arma::mat&,double&,arma::mat&,arma::mat&,arma::mat&,const Rcpp::List&,const arma::field<arma::mat>&,const arma::cube&,const arma::mat&,const arma::mat&,const arma::field<arma::mat>&,const int&,bool&)");
            p_sample_Q = (Ptr_sample_Q)R_GetCCallable("bsvarSIGNs", "_bsvarSIGNs_sample_Q");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_sample_Q(Shield<SEXP>(Rcpp::wrap(lags)), Shield<SEXP>(Rcpp::wrap(Y)), Shield<SEXP>(Rcpp::wrap(X)), Shield<SEXP>(Rcpp::wrap(aux_w)), Shield<SEXP>(Rcpp::wrap(aux_A)), Shield<SEXP>(Rcpp::wrap(aux_B)), Shield<SEXP>(Rcpp::wrap(chol_SIGMA)), Shield<SEXP>(Rcpp::wrap(prior)), Shield<SEXP>(Rcpp::wrap(VB)), Shield<SEXP>(Rcpp::wrap(sign_irf)), Shield<SEXP>(Rcpp::wrap(sign_narrative)), Shield<SEXP>(Rcpp::wrap(sign_B)), Shield<SEXP>(Rcpp::wrap(Z)), Shield<SEXP>(Rcpp::wrap(max_tries)), Shield<SEXP>(Rcpp::wrap(success)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

}

#endif // RCPP_bsvarSIGNs_RCPPEXPORTS_H_GEN_
