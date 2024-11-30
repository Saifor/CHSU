function program
V=(0.05:0.001:0.5);

T=-180+273;
p=func(V,T);
plot(V,p,'b');

hold on;

T=-130+273;
p=func(V,T);
plot(V,p,'r');

T=-90+273;
p=func(V,T);
plot(V,p,'g');

legend('t1=-180°C','t2=-130°C', 't3=-90°C')
hold off;
end

function p=func(V, T)
a=0.136;
b=3.85.*10.^(-5);
R=8.314;
n=1000;
p=(n.*R.*T)./(V-n.*b)-(n.^2.*a)./V.^2;
end

