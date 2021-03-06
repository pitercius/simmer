// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// Simulator__new
SEXP Simulator__new(SEXP name_, SEXP verbose_);
RcppExport SEXP simmer_Simulator__new(SEXP name_SEXP, SEXP verbose_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    __result = Rcpp::wrap(Simulator__new(name_, verbose_));
    return __result;
END_RCPP
}
// reset_
void reset_(SEXP sim_);
RcppExport SEXP simmer_reset_(SEXP sim_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    reset_(sim_);
    return R_NilValue;
END_RCPP
}
// now_
double now_(SEXP sim_);
RcppExport SEXP simmer_now_(SEXP sim_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    __result = Rcpp::wrap(now_(sim_));
    return __result;
END_RCPP
}
// peek_
SEXP peek_(SEXP sim_, SEXP steps_);
RcppExport SEXP simmer_peek_(SEXP sim_SEXP, SEXP steps_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type steps_(steps_SEXP);
    __result = Rcpp::wrap(peek_(sim_, steps_));
    return __result;
END_RCPP
}
// step_
void step_(SEXP sim_);
RcppExport SEXP simmer_step_(SEXP sim_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    step_(sim_);
    return R_NilValue;
END_RCPP
}
// run_
void run_(SEXP sim_, SEXP until_);
RcppExport SEXP simmer_run_(SEXP sim_SEXP, SEXP until_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type until_(until_SEXP);
    run_(sim_, until_);
    return R_NilValue;
END_RCPP
}
// add_generator_
bool add_generator_(SEXP sim_, SEXP name_prefix_, SEXP first_activity_, SEXP dist_, SEXP mon_, SEXP priority_, SEXP preemptible_, SEXP restart_);
RcppExport SEXP simmer_add_generator_(SEXP sim_SEXP, SEXP name_prefix_SEXP, SEXP first_activity_SEXP, SEXP dist_SEXP, SEXP mon_SEXP, SEXP priority_SEXP, SEXP preemptible_SEXP, SEXP restart_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_prefix_(name_prefix_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type first_activity_(first_activity_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type dist_(dist_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type mon_(mon_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type priority_(priority_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type preemptible_(preemptible_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type restart_(restart_SEXP);
    __result = Rcpp::wrap(add_generator_(sim_, name_prefix_, first_activity_, dist_, mon_, priority_, preemptible_, restart_));
    return __result;
END_RCPP
}
// add_resource_
bool add_resource_(SEXP sim_, SEXP name_, SEXP capacity_, SEXP queue_size_, SEXP mon_, SEXP preemptive_, SEXP preempt_order_, SEXP keep_queue_);
RcppExport SEXP simmer_add_resource_(SEXP sim_SEXP, SEXP name_SEXP, SEXP capacity_SEXP, SEXP queue_size_SEXP, SEXP mon_SEXP, SEXP preemptive_SEXP, SEXP preempt_order_SEXP, SEXP keep_queue_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type capacity_(capacity_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type queue_size_(queue_size_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type mon_(mon_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type preemptive_(preemptive_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type preempt_order_(preempt_order_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type keep_queue_(keep_queue_SEXP);
    __result = Rcpp::wrap(add_resource_(sim_, name_, capacity_, queue_size_, mon_, preemptive_, preempt_order_, keep_queue_));
    return __result;
END_RCPP
}
// add_resource_manager_
bool add_resource_manager_(SEXP sim_, SEXP name_, SEXP param_, SEXP intervals_, SEXP values_, SEXP period_);
RcppExport SEXP simmer_add_resource_manager_(SEXP sim_SEXP, SEXP name_SEXP, SEXP param_SEXP, SEXP intervals_SEXP, SEXP values_SEXP, SEXP period_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type param_(param_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type intervals_(intervals_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type values_(values_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type period_(period_SEXP);
    __result = Rcpp::wrap(add_resource_manager_(sim_, name_, param_, intervals_, values_, period_));
    return __result;
END_RCPP
}
// get_mon_arrivals_
SEXP get_mon_arrivals_(SEXP sim_, SEXP name_);
RcppExport SEXP simmer_get_mon_arrivals_(SEXP sim_SEXP, SEXP name_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    __result = Rcpp::wrap(get_mon_arrivals_(sim_, name_));
    return __result;
END_RCPP
}
// get_mon_arrivals_per_resource_
SEXP get_mon_arrivals_per_resource_(SEXP sim_, SEXP name_);
RcppExport SEXP simmer_get_mon_arrivals_per_resource_(SEXP sim_SEXP, SEXP name_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    __result = Rcpp::wrap(get_mon_arrivals_per_resource_(sim_, name_));
    return __result;
END_RCPP
}
// get_mon_attributes_
SEXP get_mon_attributes_(SEXP sim_, SEXP name_);
RcppExport SEXP simmer_get_mon_attributes_(SEXP sim_SEXP, SEXP name_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    __result = Rcpp::wrap(get_mon_attributes_(sim_, name_));
    return __result;
END_RCPP
}
// get_mon_resource_
SEXP get_mon_resource_(SEXP sim_, SEXP name_);
RcppExport SEXP simmer_get_mon_resource_(SEXP sim_SEXP, SEXP name_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    __result = Rcpp::wrap(get_mon_resource_(sim_, name_));
    return __result;
END_RCPP
}
// get_mon_resource_counts_
SEXP get_mon_resource_counts_(SEXP sim_, SEXP name_);
RcppExport SEXP simmer_get_mon_resource_counts_(SEXP sim_SEXP, SEXP name_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    __result = Rcpp::wrap(get_mon_resource_counts_(sim_, name_));
    return __result;
END_RCPP
}
// get_mon_resource_limits_
SEXP get_mon_resource_limits_(SEXP sim_, SEXP name_);
RcppExport SEXP simmer_get_mon_resource_limits_(SEXP sim_SEXP, SEXP name_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    __result = Rcpp::wrap(get_mon_resource_limits_(sim_, name_));
    return __result;
END_RCPP
}
// get_n_generated_
int get_n_generated_(SEXP sim_, SEXP name_);
RcppExport SEXP simmer_get_n_generated_(SEXP sim_SEXP, SEXP name_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    __result = Rcpp::wrap(get_n_generated_(sim_, name_));
    return __result;
END_RCPP
}
// set_capacity_
void set_capacity_(SEXP sim_, SEXP name_, SEXP value_);
RcppExport SEXP simmer_set_capacity_(SEXP sim_SEXP, SEXP name_SEXP, SEXP value_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type value_(value_SEXP);
    set_capacity_(sim_, name_, value_);
    return R_NilValue;
END_RCPP
}
// get_capacity_
int get_capacity_(SEXP sim_, SEXP name_);
RcppExport SEXP simmer_get_capacity_(SEXP sim_SEXP, SEXP name_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    __result = Rcpp::wrap(get_capacity_(sim_, name_));
    return __result;
END_RCPP
}
// set_queue_size_
void set_queue_size_(SEXP sim_, SEXP name_, SEXP value_);
RcppExport SEXP simmer_set_queue_size_(SEXP sim_SEXP, SEXP name_SEXP, SEXP value_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type value_(value_SEXP);
    set_queue_size_(sim_, name_, value_);
    return R_NilValue;
END_RCPP
}
// get_queue_size_
int get_queue_size_(SEXP sim_, SEXP name_);
RcppExport SEXP simmer_get_queue_size_(SEXP sim_SEXP, SEXP name_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    __result = Rcpp::wrap(get_queue_size_(sim_, name_));
    return __result;
END_RCPP
}
// get_server_count_
int get_server_count_(SEXP sim_, SEXP name_);
RcppExport SEXP simmer_get_server_count_(SEXP sim_SEXP, SEXP name_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    __result = Rcpp::wrap(get_server_count_(sim_, name_));
    return __result;
END_RCPP
}
// get_queue_count_
int get_queue_count_(SEXP sim_, SEXP name_);
RcppExport SEXP simmer_get_queue_count_(SEXP sim_SEXP, SEXP name_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    __result = Rcpp::wrap(get_queue_count_(sim_, name_));
    return __result;
END_RCPP
}
// Seize__new
SEXP Seize__new(SEXP verbose_, SEXP resource_, SEXP amount_, SEXP cont_, SEXP trj_, SEXP mask_);
RcppExport SEXP simmer_Seize__new(SEXP verbose_SEXP, SEXP resource_SEXP, SEXP amount_SEXP, SEXP cont_SEXP, SEXP trj_SEXP, SEXP mask_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type resource_(resource_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type amount_(amount_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type cont_(cont_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type trj_(trj_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type mask_(mask_SEXP);
    __result = Rcpp::wrap(Seize__new(verbose_, resource_, amount_, cont_, trj_, mask_));
    return __result;
END_RCPP
}
// Seize__new_func
SEXP Seize__new_func(SEXP verbose_, SEXP resource_, Function amount, SEXP provide_attrs_, SEXP cont_, SEXP trj_, SEXP mask_);
RcppExport SEXP simmer_Seize__new_func(SEXP verbose_SEXP, SEXP resource_SEXP, SEXP amountSEXP, SEXP provide_attrs_SEXP, SEXP cont_SEXP, SEXP trj_SEXP, SEXP mask_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type resource_(resource_SEXP);
    Rcpp::traits::input_parameter< Function >::type amount(amountSEXP);
    Rcpp::traits::input_parameter< SEXP >::type provide_attrs_(provide_attrs_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type cont_(cont_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type trj_(trj_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type mask_(mask_SEXP);
    __result = Rcpp::wrap(Seize__new_func(verbose_, resource_, amount, provide_attrs_, cont_, trj_, mask_));
    return __result;
END_RCPP
}
// SeizeSelected__new
SEXP SeizeSelected__new(SEXP verbose_, SEXP id_, SEXP amount_, SEXP cont_, SEXP trj_, SEXP mask_);
RcppExport SEXP simmer_SeizeSelected__new(SEXP verbose_SEXP, SEXP id_SEXP, SEXP amount_SEXP, SEXP cont_SEXP, SEXP trj_SEXP, SEXP mask_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type id_(id_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type amount_(amount_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type cont_(cont_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type trj_(trj_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type mask_(mask_SEXP);
    __result = Rcpp::wrap(SeizeSelected__new(verbose_, id_, amount_, cont_, trj_, mask_));
    return __result;
END_RCPP
}
// SeizeSelected__new_func
SEXP SeizeSelected__new_func(SEXP verbose_, SEXP id_, Function amount, SEXP provide_attrs_, SEXP cont_, SEXP trj_, SEXP mask_);
RcppExport SEXP simmer_SeizeSelected__new_func(SEXP verbose_SEXP, SEXP id_SEXP, SEXP amountSEXP, SEXP provide_attrs_SEXP, SEXP cont_SEXP, SEXP trj_SEXP, SEXP mask_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type id_(id_SEXP);
    Rcpp::traits::input_parameter< Function >::type amount(amountSEXP);
    Rcpp::traits::input_parameter< SEXP >::type provide_attrs_(provide_attrs_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type cont_(cont_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type trj_(trj_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type mask_(mask_SEXP);
    __result = Rcpp::wrap(SeizeSelected__new_func(verbose_, id_, amount, provide_attrs_, cont_, trj_, mask_));
    return __result;
END_RCPP
}
// Release__new
SEXP Release__new(SEXP verbose_, SEXP resource_, SEXP amount_);
RcppExport SEXP simmer_Release__new(SEXP verbose_SEXP, SEXP resource_SEXP, SEXP amount_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type resource_(resource_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type amount_(amount_SEXP);
    __result = Rcpp::wrap(Release__new(verbose_, resource_, amount_));
    return __result;
END_RCPP
}
// Release__new_func
SEXP Release__new_func(SEXP verbose_, SEXP resource_, Function amount, SEXP provide_attrs_);
RcppExport SEXP simmer_Release__new_func(SEXP verbose_SEXP, SEXP resource_SEXP, SEXP amountSEXP, SEXP provide_attrs_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type resource_(resource_SEXP);
    Rcpp::traits::input_parameter< Function >::type amount(amountSEXP);
    Rcpp::traits::input_parameter< SEXP >::type provide_attrs_(provide_attrs_SEXP);
    __result = Rcpp::wrap(Release__new_func(verbose_, resource_, amount, provide_attrs_));
    return __result;
END_RCPP
}
// ReleaseSelected__new
SEXP ReleaseSelected__new(SEXP verbose_, SEXP id_, SEXP amount_);
RcppExport SEXP simmer_ReleaseSelected__new(SEXP verbose_SEXP, SEXP id_SEXP, SEXP amount_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type id_(id_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type amount_(amount_SEXP);
    __result = Rcpp::wrap(ReleaseSelected__new(verbose_, id_, amount_));
    return __result;
END_RCPP
}
// ReleaseSelected__new_func
SEXP ReleaseSelected__new_func(SEXP verbose_, SEXP id_, Function amount, SEXP provide_attrs_);
RcppExport SEXP simmer_ReleaseSelected__new_func(SEXP verbose_SEXP, SEXP id_SEXP, SEXP amountSEXP, SEXP provide_attrs_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type id_(id_SEXP);
    Rcpp::traits::input_parameter< Function >::type amount(amountSEXP);
    Rcpp::traits::input_parameter< SEXP >::type provide_attrs_(provide_attrs_SEXP);
    __result = Rcpp::wrap(ReleaseSelected__new_func(verbose_, id_, amount, provide_attrs_));
    return __result;
END_RCPP
}
// Select__new
SEXP Select__new(SEXP verbose_, SEXP resources_, SEXP policy_, SEXP id_);
RcppExport SEXP simmer_Select__new(SEXP verbose_SEXP, SEXP resources_SEXP, SEXP policy_SEXP, SEXP id_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type resources_(resources_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type policy_(policy_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type id_(id_SEXP);
    __result = Rcpp::wrap(Select__new(verbose_, resources_, policy_, id_));
    return __result;
END_RCPP
}
// Select__new_func
SEXP Select__new_func(SEXP verbose_, Function resources, SEXP provide_attrs_, SEXP id_);
RcppExport SEXP simmer_Select__new_func(SEXP verbose_SEXP, SEXP resourcesSEXP, SEXP provide_attrs_SEXP, SEXP id_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< Function >::type resources(resourcesSEXP);
    Rcpp::traits::input_parameter< SEXP >::type provide_attrs_(provide_attrs_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type id_(id_SEXP);
    __result = Rcpp::wrap(Select__new_func(verbose_, resources, provide_attrs_, id_));
    return __result;
END_RCPP
}
// SetAttribute__new
SEXP SetAttribute__new(SEXP verbose_, SEXP key_, SEXP value_);
RcppExport SEXP simmer_SetAttribute__new(SEXP verbose_SEXP, SEXP key_SEXP, SEXP value_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type key_(key_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type value_(value_SEXP);
    __result = Rcpp::wrap(SetAttribute__new(verbose_, key_, value_));
    return __result;
END_RCPP
}
// SetAttribute__new_func
SEXP SetAttribute__new_func(SEXP verbose_, SEXP key_, Function value, SEXP provide_attrs_);
RcppExport SEXP simmer_SetAttribute__new_func(SEXP verbose_SEXP, SEXP key_SEXP, SEXP valueSEXP, SEXP provide_attrs_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type key_(key_SEXP);
    Rcpp::traits::input_parameter< Function >::type value(valueSEXP);
    Rcpp::traits::input_parameter< SEXP >::type provide_attrs_(provide_attrs_SEXP);
    __result = Rcpp::wrap(SetAttribute__new_func(verbose_, key_, value, provide_attrs_));
    return __result;
END_RCPP
}
// SetPrior__new
SEXP SetPrior__new(SEXP verbose_, SEXP values_);
RcppExport SEXP simmer_SetPrior__new(SEXP verbose_SEXP, SEXP values_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type values_(values_SEXP);
    __result = Rcpp::wrap(SetPrior__new(verbose_, values_));
    return __result;
END_RCPP
}
// SetPrior__new_func
SEXP SetPrior__new_func(SEXP verbose_, Function values, SEXP provide_attrs_);
RcppExport SEXP simmer_SetPrior__new_func(SEXP verbose_SEXP, SEXP valuesSEXP, SEXP provide_attrs_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< Function >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< SEXP >::type provide_attrs_(provide_attrs_SEXP);
    __result = Rcpp::wrap(SetPrior__new_func(verbose_, values, provide_attrs_));
    return __result;
END_RCPP
}
// Timeout__new
SEXP Timeout__new(SEXP verbose_, SEXP delay_);
RcppExport SEXP simmer_Timeout__new(SEXP verbose_SEXP, SEXP delay_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type delay_(delay_SEXP);
    __result = Rcpp::wrap(Timeout__new(verbose_, delay_));
    return __result;
END_RCPP
}
// Timeout__new_func
SEXP Timeout__new_func(SEXP verbose_, Function task, SEXP provide_attrs_);
RcppExport SEXP simmer_Timeout__new_func(SEXP verbose_SEXP, SEXP taskSEXP, SEXP provide_attrs_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< Function >::type task(taskSEXP);
    Rcpp::traits::input_parameter< SEXP >::type provide_attrs_(provide_attrs_SEXP);
    __result = Rcpp::wrap(Timeout__new_func(verbose_, task, provide_attrs_));
    return __result;
END_RCPP
}
// Branch__new
SEXP Branch__new(SEXP verbose_, Function option, SEXP provide_attrs_, SEXP cont_, SEXP trj_);
RcppExport SEXP simmer_Branch__new(SEXP verbose_SEXP, SEXP optionSEXP, SEXP provide_attrs_SEXP, SEXP cont_SEXP, SEXP trj_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< Function >::type option(optionSEXP);
    Rcpp::traits::input_parameter< SEXP >::type provide_attrs_(provide_attrs_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type cont_(cont_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type trj_(trj_SEXP);
    __result = Rcpp::wrap(Branch__new(verbose_, option, provide_attrs_, cont_, trj_));
    return __result;
END_RCPP
}
// Rollback__new
SEXP Rollback__new(SEXP verbose_, SEXP amount_, SEXP times_);
RcppExport SEXP simmer_Rollback__new(SEXP verbose_SEXP, SEXP amount_SEXP, SEXP times_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type amount_(amount_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type times_(times_SEXP);
    __result = Rcpp::wrap(Rollback__new(verbose_, amount_, times_));
    return __result;
END_RCPP
}
// Rollback__new_func
SEXP Rollback__new_func(SEXP verbose_, SEXP amount_, Function check, SEXP provide_attrs_);
RcppExport SEXP simmer_Rollback__new_func(SEXP verbose_SEXP, SEXP amount_SEXP, SEXP checkSEXP, SEXP provide_attrs_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type amount_(amount_SEXP);
    Rcpp::traits::input_parameter< Function >::type check(checkSEXP);
    Rcpp::traits::input_parameter< SEXP >::type provide_attrs_(provide_attrs_SEXP);
    __result = Rcpp::wrap(Rollback__new_func(verbose_, amount_, check, provide_attrs_));
    return __result;
END_RCPP
}
// Leave__new
SEXP Leave__new(SEXP verbose_, SEXP prob_);
RcppExport SEXP simmer_Leave__new(SEXP verbose_SEXP, SEXP prob_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type prob_(prob_SEXP);
    __result = Rcpp::wrap(Leave__new(verbose_, prob_));
    return __result;
END_RCPP
}
// Leave__new_func
SEXP Leave__new_func(SEXP verbose_, Function prob, SEXP provide_attrs_);
RcppExport SEXP simmer_Leave__new_func(SEXP verbose_SEXP, SEXP probSEXP, SEXP provide_attrs_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    Rcpp::traits::input_parameter< Function >::type prob(probSEXP);
    Rcpp::traits::input_parameter< SEXP >::type provide_attrs_(provide_attrs_SEXP);
    __result = Rcpp::wrap(Leave__new_func(verbose_, prob, provide_attrs_));
    return __result;
END_RCPP
}
// activity_get_n_
int activity_get_n_(SEXP activity_);
RcppExport SEXP simmer_activity_get_n_(SEXP activity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type activity_(activity_SEXP);
    __result = Rcpp::wrap(activity_get_n_(activity_));
    return __result;
END_RCPP
}
// activity_print_
void activity_print_(SEXP activity_, SEXP indent_);
RcppExport SEXP simmer_activity_print_(SEXP activity_SEXP, SEXP indent_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type activity_(activity_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type indent_(indent_SEXP);
    activity_print_(activity_, indent_);
    return R_NilValue;
END_RCPP
}
// activity_get_next_
SEXP activity_get_next_(SEXP activity_);
RcppExport SEXP simmer_activity_get_next_(SEXP activity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type activity_(activity_SEXP);
    __result = Rcpp::wrap(activity_get_next_(activity_));
    return __result;
END_RCPP
}
// activity_get_prev_
SEXP activity_get_prev_(SEXP activity_);
RcppExport SEXP simmer_activity_get_prev_(SEXP activity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type activity_(activity_SEXP);
    __result = Rcpp::wrap(activity_get_prev_(activity_));
    return __result;
END_RCPP
}
// activity_chain_
void activity_chain_(SEXP first_, SEXP second_);
RcppExport SEXP simmer_activity_chain_(SEXP first_SEXP, SEXP second_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type first_(first_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type second_(second_SEXP);
    activity_chain_(first_, second_);
    return R_NilValue;
END_RCPP
}
// activity_clone_
SEXP activity_clone_(SEXP activity_);
RcppExport SEXP simmer_activity_clone_(SEXP activity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type activity_(activity_SEXP);
    __result = Rcpp::wrap(activity_clone_(activity_));
    return __result;
END_RCPP
}
