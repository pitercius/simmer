% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/simulator.R
\name{set_get_resource}
\alias{get_capacity}
\alias{get_queue_count}
\alias{get_queue_size}
\alias{get_server_count}
\alias{set_capacity}
\alias{set_get_resource}
\alias{set_queue_size}
\title{Set/Get a resource's parameters}
\usage{
set_capacity(env, name, value)

get_capacity(env, name)

set_queue_size(env, name, value)

get_queue_size(env, name)

get_server_count(env, name)

get_queue_count(env, name)
}
\arguments{
\item{env}{the simulation environment.}

\item{name}{the name of the resource.}

\item{value}{new value to set.}
}
\value{
Return the simulation environment (setters) or a numeric value (getters).
}
\description{
Set/Get a resource's server capacity/count and queue size/count.
}

