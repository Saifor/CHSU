function program
V=(84:0.05:88);
p=func(V);
plot(V,p);
grid;
end

function p=func(V)
R=8.314;
m=0.2;
M=28*10^(-3);
n=m/M;
T=-120+273;
Tk=-146.9+273;
Pk=3.39.*10.^6;
b=(R.*Tk)./(8.*Pk);
a=27.*Pk.*b.^2;
p=(n.*R.*T)./(V-(n.*b)) - ((n.^2.*a)./(V.^2));
end