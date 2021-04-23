#ifndef QTS_H
#define QTS_H

#include <Rcpp.h>

//' QTS Transformation To Angle Time Series
//'
//' This function computes a univariate time series representing the angle
//' between the first and other attitudes.
//'
//' @param qts A quaternion time series stored as a \code{\link[tibble]{tibble}}
//'   with columns `time`, `w`, `x`, `y` and `z`.
//' @param disable_normalization A boolean specifying whether quaternion
//'   normalization should be disabled. Defaults to `FALSE`.
//'
//' @return A time series stored as a \code{\link[tibble]{tibble}} with columns
//'   `time` and `angle` in which `angle` measures the angle between the current
//'   rotation and the first one.
//'
//' @export
//' @examples
//' TO DO
// [[Rcpp::export]]
Rcpp::DataFrame qts2angle(
        const Rcpp::DataFrame &qts,
        const bool disable_normalization = false
);

//' QTS Reorientation
//'
//' This function reorients the quaternions in a QTS for representing attitude
//' with respect to the first time point.
//'
//' @param qts A quaternion time series stored as a \code{\link[tibble]{tibble}}
//'   with columns `time`, `w`, `x`, `y` and `z`.
//' @param disable_normalization A boolean specifying whether quaternion
//'   normalization should be disabled. Defaults to `FALSE`.
//'
//' @return A quaternion time series stored as a \code{\link[tibble]{tibble}}
//'   with columns `time`, `w`, `x`, `y` and `z` in which quaternions measure
//'   attitude with respect to the first time point.
//'
//' @export
//' @examples
//' TO DO
// [[Rcpp::export]]
Rcpp::DataFrame reorient_qts(
        const Rcpp::DataFrame &qts,
        const bool disable_normalization = false
);

//' QTS Normalization
//'
//' This function ensures that all quaternions in the time series are unit
//' quaternions.
//'
//' @param qts A quaternion time series stored as a \code{\link[tibble]{tibble}}
//'   with columns `time`, `w`, `x`, `y` and `z`.
//'
//' @return A quaternion time series stored as a \code{\link[tibble]{tibble}}
//'   with columns `time`, `w`, `x`, `y` and `z` in which quaternions are unit
//'   quaternions.
//'
//' @export
//' @examples
//' TO DO
// [[Rcpp::export]]
Rcpp::DataFrame normalize_qts(
        const Rcpp::DataFrame &qts
);

#endif /* QTS_H */