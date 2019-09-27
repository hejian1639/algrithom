$$
\Gamma(x)=\int_0^{\infty}t^{x-1}e^{-t}dt
$$

---

$$
f(x)=x! 
$$

$$
f(x+1)=(x+1)*f(x) 
$$

$$
f'(x+1)=f(x)+(x+1)*f'(x)
$$

---

$$
n*ln(n)-n+1\leq ln(n!)\leq (n+1)*ln(n+1)-n
$$

$$
ln(n!)=(n+\Delta n)*ln(n+\Delta n)-n-\Delta n
$$

___

$$
\int ln(x)dx=x*ln(x)-x
$$

$$
\frac{x^x}{e^x}
$$

$$
\frac{(x+1)^{x+1}}{x^x*e} 
$$

$$
\frac{(1+\frac{1}{x})}{e}^x*(x+1)
$$

___

$$
\frac{f(x+\Delta x)}{f(x)}\approx\frac{(x+\Delta x)^{x+\Delta x}}{x^x*e^{\Delta x}} 
$$

___

$$
\begin{align*}
& (x^x*e^{-x})' \\
=& x^x*e^{-x}*[ln(x)+1]-x^x*e^{-x} \\
=& x^x*e^{-x}*ln(x) \\
\end{align*}
$$

$$
(x^x)'=x^x*[ln(x)+1]
$$

___

$$
\frac{(n+1)^{n+1}}{ \prod_{k=1}^{n} (1+\frac{1}{k})^k}=n!
$$

$$
\prod_{k=1}^{n} (1+\frac{1}{k})^k
$$

$$
\sum_{k=1}^n kln(1+\frac{1}{k})
$$

$$
\int xln(1+\frac{1}{x})dx
$$

$$
x*ln(1+\frac{1}{x})=x*ln(x+1)-x*ln(x)
$$

$$
\int x*ln(x+1)dx-\int x*ln(x)dx
$$

$$
\int x*ln(x) dx=\frac{x^2}{4}[2ln(x)-1]
$$

$$
\int (x+1)ln(x+1) dx=\frac{(x+1)^2}{4}[2ln(x+1)-1]
$$

$$
\int x*ln(x+1) dx=\frac{(x+1)^2}{4}[2ln(x+1)-1] - \int ln(x+1)dx
$$

$$
\int x*ln(x+1) dx=\frac{(x+1)^2}{4}[2ln(x+1)-1] - \frac{1}{x+1}
$$

---

$$
\begin{align*}
& \int x*ln(1+\frac{1}{x})dx \\
=& \int x*ln(x+1)dx-\int x*ln(x)dx \\
=& \frac{(x+1)^2}{4}[2ln(x+1)-1]-\frac{1}{x+1}-\frac{x^2}{4}[2ln(x)-1] \\
=& \frac{(x+1)^2}{2}ln(x+1)-\frac{x^2}{2}ln(x)-\frac{(x+1)^2}{4}-\frac{1}{x+1}+\frac{x^2}{4} \\
=& \frac{(x+1)^2}{2}ln(x+1)-\frac{x^2}{2}ln(x)-\frac{2x+1}{4}-\frac{1}{x+1} \\
\end{align*}
$$

$$
\frac{x^2}{2}ln(x)-\frac{(x-1)^2}{2}ln(x-1)-\frac{2x-1}{4}-\frac{1}{x}
$$



---



$$
\begin{align*}
& \frac{1\cdot 2\cdot 3 \cdots m}{(1+n)(2+n)\cdots (m+n)}(m+1)^{n} \\
= & 1\cdot 2\cdot 3 \cdots n \cdot \frac{(n+1)(n+2)\cdots m}{(1+n)(2+n)\cdots m }
\cdot \frac{(m+1)^{n}}{(m+1)(m+2)\cdots (m+n)} \\
= & n! \frac{(m+1)^{n}}{(m+1)(m+2)\cdots (m+n)} \\
= & n!\prod_{k=1}^{n} \frac{m+1}{m+k} \rightarrow n! \qquad (m\rightarrow \infty)
\end{align*}
$$

---

$$
\sum_{i=0}^\infty f^{(n)}(a)
$$

$$
\begin{align} f(x)_{Taylor}  &= \sum_{n=0}^{\infty} \frac{f^{(n)}(a)}{n!} \times (x - a)^n \\ &= f(a) + \frac{f'(a)}{1!}(x-a) + \frac{f^{(2)}(a)}{2!}(x-a)^2+ \cdots + \frac{f^{(n)}(a)}{n!}(x-a)^n + R_n(x) \end{align}
$$

$$
\begin{align} {f'(a)} \end{align}
$$

---

$$
\begin{equation}
\label{euler-series2}
\lim_{m \rightarrow \infty} \frac{1\cdot 2\cdot 3 \cdots m}{(1+n)(2+n)\cdots (m+n)}(m+1)^{n} = n!kl mkx
\end{equation}
$$
