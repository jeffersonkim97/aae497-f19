import rocket_casadi
x0, u0, p0 = rocket_casadi.do_trim(vt=100, gamma_deg=0, m_fuel=0.8)

sys1 = rocket_casadi.linearize()(x0, u0, p0)
lin = rocket_casadi.linearize()
import control
sys1 = control.ss(*lin(x0, u0, p0))