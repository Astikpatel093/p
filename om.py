from fpdf import FPDF

# Create PDF
pdf = FPDF()
pdf.add_page()
pdf.set_auto_page_break(auto=True, margin=10)
pdf.set_font("Arial", size=10)

# Title
pdf.set_font("Arial", 'B', 14)
pdf.cell(200, 10, txt="Calculus Formula Sheet", ln=True, align='C')
pdf.ln(5)

# Reset font
pdf.set_font("Arial", size=10)

# Content dictionary
content = {
    "1. Limits & Continuity": """
Limit Laws:
lim[x→a] (f(x) ± g(x)) = lim f(x) ± lim g(x)
lim[x→a] (f(x)g(x)) = lim f(x) * lim g(x)
lim[x→a] (f(x)/g(x)) = lim f(x) / lim g(x), if lim g(x) ≠ 0

Standard Limits:
lim[x→0] (sin x)/x = 1,  lim[x→0] (1 - cos x)/x² = 1/2

Continuity: f is continuous at x=a if:
lim[x→a⁻] f(x) = lim[x→a⁺] f(x) = f(a)
""",

    "2. Differentiability": """
Differentiable ⇒ Continuous (not vice versa)
Definition: f'(x) = lim[h→0] (f(x+h) - f(x)) / h
""",

    "3. Mean Value Theorems": """
Rolle’s Theorem: f(a)=f(b), f continuous on [a,b], differentiable on (a,b) ⇒ ∃ c: f'(c)=0

Lagrange’s MVT: ∃ c in (a,b) s.t. f'(c) = [f(b) - f(a)] / (b - a)

Cauchy’s MVT: For f, g continuous on [a,b], differentiable on (a,b), g'(x) ≠ 0:
⇒ ∃ c: f'(c)/g'(c) = [f(b)-f(a)] / [g(b)-g(a)]
""",

    "4. Taylor Series (with Lagrange remainder)": """
f(x) = f(a) + f'(a)(x-a) + f''(a)(x-a)²/2! + ... + fⁿ(a)(x-a)ⁿ/n! + Rₙ

Lagrange’s remainder:
Rₙ = fⁿ⁺¹(c)(x-a)ⁿ⁺¹ / (n+1)!  for some c ∈ (a, x)
""",

    "5. Leibniz Rule": """
For nth derivative of product: f⁽ⁿ⁾(x) = Σ[k=0 to n] (n choose k) * u⁽ⁿ⁻ᵏ⁾(x) * v⁽ᵏ⁾(x)
""",

    "6. Multivariable Calculus": """
Partial Derivatives: ∂f/∂x, ∂f/∂y

Euler’s Theorem: For homogeneous f of degree n:
x ∂f/∂x + y ∂f/∂y = n f(x, y)

Total Derivative: dz/dt = ∂f/∂x dx/dt + ∂f/∂y dy/dt
""",

    "7. Jacobian": """
J = ∂(u, v)/∂(x, y) = | ∂u/∂x  ∂u/∂y |
                      | ∂v/∂x  ∂v/∂y |
""",

    "8. Maxima and Minima": """
Second Derivative Test:
D = fₓₓ fᵧᵧ - (fₓᵧ)²

If D > 0 and fₓₓ > 0 ⇒ Min  
If D > 0 and fₓₓ < 0 ⇒ Max  
If D < 0 ⇒ Saddle point  
If D = 0 ⇒ Inconclusive
""",

    "9. Definite Integrals": """
∫ₐᵇ f(x) dx = -∫ᵇₐ f(x) dx
∫ₐᵇ f(x) dx = ∫ₐᶜ f(x) dx + ∫𝚌ᵇ f(x) dx
∫ₐᵇ f(x) dx = ∫ₐᵇ f(a + b - x) dx
""",

    "10. Double Integrals": """
Cartesian: ∬_R f(x, y) dx dy

Polar: x = r cosθ, y = r sinθ
∬_R f(r, θ) r dr dθ
""",

    "11. Triple Integrals": """
Cartesian: ∭_R f(x, y, z) dx dy dz

Cylindrical: x = r cosθ, y = r sinθ, z = z
∭ f(r, θ, z) r dr dθ dz

Spherical: x = ρ sinφ cosθ, y = ρ sinφ sinθ, z = ρ cosφ
∭ f(ρ, θ, φ) ρ² sinφ dρ dθ dφ
"""
}

# Add content to PDF
for title, text in content.items():
    pdf.set_font("Arial", 'B', 11)
    pdf.multi_cell(0, 8, title)
    pdf.set_font("Arial", size=10)
    pdf.multi_cell(0, 6, text)
    pdf.ln(2)

# Save PDF
pdf.output("Calculus_Formula_Sheet.pdf")