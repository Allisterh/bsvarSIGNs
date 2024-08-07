
data(optimism)

set.seed(1)
suppressMessages(
  specification_no1 <- specify_bsvarSIGN$new(optimism)
)
run_no1             <- estimate(specification_no1, 3, 1, show_progress = FALSE)
irf                 <- compute_impulse_responses(run_no1, horizon = 2)

set.seed(1)
suppressMessages(
  irf2              <- optimism |>
    specify_bsvarSIGN$new() |>
    estimate(S = 3, thin = 1, show_progress = FALSE) |>
    compute_impulse_responses(horizon = 2)
)


expect_error(
  compute_impulse_responses(run_no1),
  info = "compute_impulse_responses: specify horizon."
)

expect_identical(
  irf[3,3,3,3], irf2[3,3,3,3],
  info = "compute_impulse_responses: identical for normal and pipe workflow."
)


set.seed(1)
suppressMessages(
  specification_no1 <- specify_bsvarSIGN$new(optimism)
)
run_no1             <- estimate(specification_no1, 3, 1, show_progress = FALSE)
irf                 <- compute_impulse_responses(run_no1, horizon = 2, standardise = TRUE)

set.seed(1)
suppressMessages(
  irf2              <- optimism |>
    specify_bsvarSIGN$new() |>
    estimate(S = 3, thin = 1, show_progress = FALSE) |>
    compute_impulse_responses(horizon = 2, standardise = TRUE)
)



expect_equal(
  irf[1,1,1,1], 1,
  info = "compute_impulse_responses: unit own shock at 0 horizon."
)

expect_error(
  compute_impulse_responses(run_no1),
  info = "compute_impulse_responses: specify horizon."
)

expect_identical(
  irf[3,3,3,3], irf2[3,3,3,3],
  info = "compute_impulse_responses: identical for normal and pipe workflow."
)


# zero IRF on the main diagonal 

set.seed(1)
suppressMessages(
  specification_no1 <- specify_bsvarSIGN$new(optimism, sign_irf = matrix(c(0,rep(NA, 24)),5,5))
)
run_no1             <- estimate(specification_no1, 3, 1, show_progress = FALSE)

expect_message(
  compute_impulse_responses(run_no1, horizon = 2, standardise = TRUE),
  pattern = "zero",
  info = "compute_impulse_responses: zero IRF on the main diagonal and IRF standarisation"
)


