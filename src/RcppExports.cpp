// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// est_betak
arma::rowvec est_betak(const arma::rowvec& wz_co, float gamma_);
RcppExport SEXP _psychtm_est_betak(SEXP wz_coSEXP, SEXP gamma_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::rowvec& >::type wz_co(wz_coSEXP);
    Rcpp::traits::input_parameter< float >::type gamma_(gamma_SEXP);
    rcpp_result_gen = Rcpp::wrap(est_betak(wz_co, gamma_));
    return rcpp_result_gen;
END_RCPP
}
// est_thetad
arma::rowvec est_thetad(const arma::rowvec& z_count, float alpha_);
RcppExport SEXP _psychtm_est_thetad(SEXP z_countSEXP, SEXP alpha_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::rowvec& >::type z_count(z_countSEXP);
    Rcpp::traits::input_parameter< float >::type alpha_(alpha_SEXP);
    rcpp_result_gen = Rcpp::wrap(est_thetad(z_count, alpha_));
    return rcpp_result_gen;
END_RCPP
}
// count_topic_word
arma::mat count_topic_word(uint16_t K, uint32_t V, const arma::umat& doc_topic, const arma::umat& doc_word);
RcppExport SEXP _psychtm_count_topic_word(SEXP KSEXP, SEXP VSEXP, SEXP doc_topicSEXP, SEXP doc_wordSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint16_t >::type K(KSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type doc_topic(doc_topicSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type doc_word(doc_wordSEXP);
    rcpp_result_gen = Rcpp::wrap(count_topic_word(K, V, doc_topic, doc_word));
    return rcpp_result_gen;
END_RCPP
}
// waic_all
NumericVector waic_all(uint32_t iter, const arma::mat& l_pred);
RcppExport SEXP _psychtm_waic_all(SEXP iterSEXP, SEXP l_predSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint32_t >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type l_pred(l_predSEXP);
    rcpp_result_gen = Rcpp::wrap(waic_all(iter, l_pred));
    return rcpp_result_gen;
END_RCPP
}
// waic_diff
NumericVector waic_diff(const arma::mat& l_pred1, const arma::mat& l_pred2);
RcppExport SEXP _psychtm_waic_diff(SEXP l_pred1SEXP, SEXP l_pred2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type l_pred1(l_pred1SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type l_pred2(l_pred2SEXP);
    rcpp_result_gen = Rcpp::wrap(waic_diff(l_pred1, l_pred2));
    return rcpp_result_gen;
END_RCPP
}
// gibbs_mlr_cpp
S4 gibbs_mlr_cpp(uint32_t m, uint32_t burn, uint32_t thin, const arma::colvec& y, const arma::mat& x, const arma::colvec& mu0, const arma::mat& sigma0, arma::colvec eta_start, float a0, float b0, bool verbose, bool display_progress);
RcppExport SEXP _psychtm_gibbs_mlr_cpp(SEXP mSEXP, SEXP burnSEXP, SEXP thinSEXP, SEXP ySEXP, SEXP xSEXP, SEXP mu0SEXP, SEXP sigma0SEXP, SEXP eta_startSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP verboseSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint32_t >::type m(mSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma0(sigma0SEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type eta_start(eta_startSEXP);
    Rcpp::traits::input_parameter< float >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< float >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(gibbs_mlr_cpp(m, burn, thin, y, x, mu0, sigma0, eta_start, a0, b0, verbose, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// gibbs_logistic_cpp
S4 gibbs_logistic_cpp(uint32_t m, uint32_t burn, uint32_t thin, const arma::colvec& y, const arma::mat& x, const arma::colvec& mu0, const arma::mat& sigma0, arma::colvec eta_start, arma::vec proposal_sd, bool verbose, bool display_progress);
RcppExport SEXP _psychtm_gibbs_logistic_cpp(SEXP mSEXP, SEXP burnSEXP, SEXP thinSEXP, SEXP ySEXP, SEXP xSEXP, SEXP mu0SEXP, SEXP sigma0SEXP, SEXP eta_startSEXP, SEXP proposal_sdSEXP, SEXP verboseSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint32_t >::type m(mSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma0(sigma0SEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type eta_start(eta_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type proposal_sd(proposal_sdSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(gibbs_logistic_cpp(m, burn, thin, y, x, mu0, sigma0, eta_start, proposal_sd, verbose, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// gibbs_sldax_cpp
S4 gibbs_sldax_cpp(const arma::umat& docs, uint32_t V, uint32_t m, uint32_t burn, uint32_t thin, uint16_t K, uint8_t model, const arma::colvec& y, const arma::mat& x, const arma::colvec& mu0, const arma::mat& sigma0, float a0, float b0, arma::colvec eta_start, arma::vec proposal_sd, int interaction_xcol, float alpha_, float gamma_, bool constrain_eta, bool verbose, bool display_progress);
RcppExport SEXP _psychtm_gibbs_sldax_cpp(SEXP docsSEXP, SEXP VSEXP, SEXP mSEXP, SEXP burnSEXP, SEXP thinSEXP, SEXP KSEXP, SEXP modelSEXP, SEXP ySEXP, SEXP xSEXP, SEXP mu0SEXP, SEXP sigma0SEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP eta_startSEXP, SEXP proposal_sdSEXP, SEXP interaction_xcolSEXP, SEXP alpha_SEXP, SEXP gamma_SEXP, SEXP constrain_etaSEXP, SEXP verboseSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::umat& >::type docs(docsSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type V(VSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type m(mSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< uint16_t >::type K(KSEXP);
    Rcpp::traits::input_parameter< uint8_t >::type model(modelSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma0(sigma0SEXP);
    Rcpp::traits::input_parameter< float >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< float >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type eta_start(eta_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type proposal_sd(proposal_sdSEXP);
    Rcpp::traits::input_parameter< int >::type interaction_xcol(interaction_xcolSEXP);
    Rcpp::traits::input_parameter< float >::type alpha_(alpha_SEXP);
    Rcpp::traits::input_parameter< float >::type gamma_(gamma_SEXP);
    Rcpp::traits::input_parameter< bool >::type constrain_eta(constrain_etaSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(gibbs_sldax_cpp(docs, V, m, burn, thin, K, model, y, x, mu0, sigma0, a0, b0, eta_start, proposal_sd, interaction_xcol, alpha_, gamma_, constrain_eta, verbose, display_progress));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_psychtm_est_betak", (DL_FUNC) &_psychtm_est_betak, 2},
    {"_psychtm_est_thetad", (DL_FUNC) &_psychtm_est_thetad, 2},
    {"_psychtm_count_topic_word", (DL_FUNC) &_psychtm_count_topic_word, 4},
    {"_psychtm_waic_all", (DL_FUNC) &_psychtm_waic_all, 2},
    {"_psychtm_waic_diff", (DL_FUNC) &_psychtm_waic_diff, 2},
    {"_psychtm_gibbs_mlr_cpp", (DL_FUNC) &_psychtm_gibbs_mlr_cpp, 12},
    {"_psychtm_gibbs_logistic_cpp", (DL_FUNC) &_psychtm_gibbs_logistic_cpp, 11},
    {"_psychtm_gibbs_sldax_cpp", (DL_FUNC) &_psychtm_gibbs_sldax_cpp, 21},
    {NULL, NULL, 0}
};

RcppExport void R_init_psychtm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
