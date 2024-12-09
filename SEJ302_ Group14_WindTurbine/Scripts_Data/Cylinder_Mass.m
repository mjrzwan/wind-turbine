% Example function for calculating cylinder mass
% Copyright 2009-2020 The MathWorks(TM), Inc.

function [mass] = Cylinder_Mass(length, radius,density)
mass = density*pi*radius^2*length;