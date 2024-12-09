function xcp = Wind_Turbinexcp

xcp.events     =  repmat(struct('id',{}, 'sampletime', {}, 'offset', {}), getNumEvents, 1 );
xcp.parameters =  repmat(struct('symbol',{}, 'size', {}, 'dtname', {}, 'baseaddr', {}), getNumParameters, 1 );
xcp.signals    =  repmat(struct('symbol',{}), getNumSignals, 1 );
xcp.models     =  cell(1,getNumModels);
    
xcp.models{1} = 'Wind_Turbine';
   
   
         
xcp.events(1).id         = 0;
xcp.events(1).sampletime = 0.0015;
xcp.events(1).offset     = 0.0;
    
xcp.signals(1).symbol =  'Wind_Turbine_B.PitchPowerOn';
    
xcp.signals(2).symbol =  'Wind_Turbine_B.radius';
    
xcp.signals(3).symbol =  'Wind_Turbine_B.Divide';
    
xcp.signals(4).symbol =  'Wind_Turbine_B.Kv_p';
    
xcp.signals(5).symbol =  'Wind_Turbine_B.Kv1_p';
    
xcp.signals(6).symbol =  'Wind_Turbine_B.pitch_brake';
    
xcp.signals(7).symbol =  'Wind_Turbine_B.parking_brake';
    
xcp.signals(8).symbol =  'Wind_Turbine_B.generator_trip';
    
xcp.signals(9).symbol =  'Wind_Turbine_B.turbine_state';
    
xcp.signals(10).symbol =  'Wind_Turbine_B.radpstorpm';
    
xcp.signals(11).symbol =  'Wind_Turbine_B.ExtensiontoAngle';
    
xcp.signals(12).symbol =  'Wind_Turbine_B.GenSpdpu';
    
xcp.signals(13).symbol =  'Wind_Turbine_B.radps2rpm_p';
    
xcp.signals(14).symbol =  'Wind_Turbine_B.rpm2radps';
    
xcp.signals(15).symbol =  'Wind_Turbine_B.Divide_k';
    
xcp.signals(16).symbol =  'Wind_Turbine_B.Saturation_i';
    
xcp.signals(17).symbol =  'Wind_Turbine_B.RATE_TRANSITION_10_1_1';
    
xcp.signals(18).symbol =  'Wind_Turbine_B.RATE_TRANSITION_1_1_1';
    
xcp.signals(19).symbol =  'Wind_Turbine_B.RATE_TRANSITION_2_1_1';
    
xcp.signals(20).symbol =  'Wind_Turbine_B.RATE_TRANSITION_3_1_1';
    
xcp.signals(21).symbol =  'Wind_Turbine_B.RATE_TRANSITION_4_1_1';
    
xcp.signals(22).symbol =  'Wind_Turbine_B.RATE_TRANSITION_5_1_1';
    
xcp.signals(23).symbol =  'Wind_Turbine_B.RATE_TRANSITION_6_1_1';
    
xcp.signals(24).symbol =  'Wind_Turbine_B.RATE_TRANSITION_7_1_1';
    
xcp.signals(25).symbol =  'Wind_Turbine_B.RATE_TRANSITION_8_1_1';
    
xcp.signals(26).symbol =  'Wind_Turbine_B.RATE_TRANSITION_9_1_1';
    
xcp.signals(27).symbol =  'Wind_Turbine_B.INPUT_10_1_1';
    
xcp.signals(28).symbol =  'Wind_Turbine_B.INPUT_11_1_1';
    
xcp.signals(29).symbol =  'Wind_Turbine_B.INPUT_12_1_1';
    
xcp.signals(30).symbol =  'Wind_Turbine_B.INPUT_13_1_1';
    
xcp.signals(31).symbol =  'Wind_Turbine_B.INPUT_14_1_1';
    
xcp.signals(32).symbol =  'Wind_Turbine_B.INPUT_15_1_1';
    
xcp.signals(33).symbol =  'Wind_Turbine_B.INPUT_16_1_1';
    
xcp.signals(34).symbol =  'Wind_Turbine_B.INPUT_17_1_1';
    
xcp.signals(35).symbol =  'Wind_Turbine_B.INPUT_18_1_1';
    
xcp.signals(36).symbol =  'Wind_Turbine_B.INPUT_1_1_1';
    
xcp.signals(37).symbol =  'Wind_Turbine_B.INPUT_1_2_1';
    
xcp.signals(38).symbol =  'Wind_Turbine_B.INPUT_1_3_1';
    
xcp.signals(39).symbol =  'Wind_Turbine_B.INPUT_2_1_1';
    
xcp.signals(40).symbol =  'Wind_Turbine_B.INPUT_2_2_1';
    
xcp.signals(41).symbol =  'Wind_Turbine_B.INPUT_2_3_1';
    
xcp.signals(42).symbol =  'Wind_Turbine_B.INPUT_3_1_1';
    
xcp.signals(43).symbol =  'Wind_Turbine_B.INPUT_3_2_1';
    
xcp.signals(44).symbol =  'Wind_Turbine_B.INPUT_3_3_1';
    
xcp.signals(45).symbol =  'Wind_Turbine_B.INPUT_4_1_1';
    
xcp.signals(46).symbol =  'Wind_Turbine_B.INPUT_5_1_1';
    
xcp.signals(47).symbol =  'Wind_Turbine_B.INPUT_6_1_1';
    
xcp.signals(48).symbol =  'Wind_Turbine_B.INPUT_7_1_1';
    
xcp.signals(49).symbol =  'Wind_Turbine_B.INPUT_8_1_1';
    
xcp.signals(50).symbol =  'Wind_Turbine_B.INPUT_9_1_1';
    
xcp.signals(51).symbol =  'Wind_Turbine_B.INTERNAL_10_1_1';
    
xcp.signals(52).symbol =  'Wind_Turbine_B.INTERNAL_1_1_1';
    
xcp.signals(53).symbol =  'Wind_Turbine_B.INTERNAL_2_1_1';
    
xcp.signals(54).symbol =  'Wind_Turbine_B.INTERNAL_3_1_1';
    
xcp.signals(55).symbol =  'Wind_Turbine_B.INTERNAL_4_1_1';
    
xcp.signals(56).symbol =  'Wind_Turbine_B.INTERNAL_5_1_1';
    
xcp.signals(57).symbol =  'Wind_Turbine_B.INTERNAL_6_1_1';
    
xcp.signals(58).symbol =  'Wind_Turbine_B.INTERNAL_7_1_1';
    
xcp.signals(59).symbol =  'Wind_Turbine_B.INTERNAL_8_1_1';
    
xcp.signals(60).symbol =  'Wind_Turbine_B.INTERNAL_9_1_1';
    
xcp.signals(61).symbol =  'Wind_Turbine_B.OUTPUT_1_0';
    
xcp.signals(62).symbol =  'Wind_Turbine_B.OUTPUT_2_0';
    
xcp.signals(63).symbol =  'Wind_Turbine_B.OUTPUT_3_0';
    
xcp.signals(64).symbol =  'Wind_Turbine_B.OUTPUT_4_0';
    
xcp.signals(65).symbol =  'Wind_Turbine_B.OUTPUT_5_0';
    
xcp.signals(66).symbol =  'Wind_Turbine_B.OUTPUT_6_0';
    
xcp.signals(67).symbol =  'Wind_Turbine_B.OUTPUT_6_1';
    
xcp.signals(68).symbol =  'Wind_Turbine_B.STATE_1';
    
xcp.signals(69).symbol =  'Wind_Turbine_B.STATE_2';
    
xcp.signals(70).symbol =  'Wind_Turbine_B.STATE_3';
    
xcp.signals(71).symbol =  'Wind_Turbine_B.STATE_4';
    
xcp.signals(72).symbol =  'Wind_Turbine_B.STATE_5';
    
xcp.signals(73).symbol =  'Wind_Turbine_B.STATE_6';
    
xcp.signals(74).symbol =  'Wind_Turbine_B.DerivativeControl';
    
xcp.signals(75).symbol =  'Wind_Turbine_B.LimitNacelleYawRateCmd';
    
xcp.signals(76).symbol =  'Wind_Turbine_B.TorqueCommand';
    
xcp.signals(77).symbol =  'Wind_Turbine_B.Sum_gv';
    
xcp.signals(78).symbol =  'Wind_Turbine_B.Sum1_g';
    
xcp.signals(79).symbol =  'Wind_Turbine_B.Sum3_kq';
    
xcp.signals(80).symbol =  'Wind_Turbine_B.StateSpace';
    
xcp.signals(81).symbol =  'Wind_Turbine_B.Gain_gi';
    
xcp.signals(82).symbol =  'Wind_Turbine_B.alpha';
    
xcp.signals(83).symbol =  'Wind_Turbine_B.TrigonometricFunction_d';
    
xcp.signals(84).symbol =  'Wind_Turbine_B.QS';
    
xcp.signals(85).symbol =  'Wind_Turbine_B.MathFunction1';
    
xcp.signals(86).symbol =  'Wind_Turbine_B.MathFunction2';
    
xcp.signals(87).symbol =  'Wind_Turbine_B.Q';
    
xcp.signals(88).symbol =  'Wind_Turbine_B.LiftForce';
    
xcp.signals(89).symbol =  'Wind_Turbine_B.DragForce';
    
xcp.signals(90).symbol =  'Wind_Turbine_B.V2_c';
    
xcp.signals(91).symbol =  'Wind_Turbine_B.Gain_j';
    
xcp.signals(92).symbol =  'Wind_Turbine_B.Integrator_c';
    
xcp.signals(93).symbol =  'Wind_Turbine_B.Sum_c';
    
xcp.signals(94).symbol =  'Wind_Turbine_B.Gain_ep';
    
xcp.signals(95).symbol =  'Wind_Turbine_B.Integrator_k';
    
xcp.signals(96).symbol =  'Wind_Turbine_B.Sum_m';
    
xcp.signals(97).symbol =  'Wind_Turbine_B.Cd';
    
xcp.signals(98).symbol =  'Wind_Turbine_B.Cl';
    
xcp.signals(99).symbol =  'Wind_Turbine_B.MathFunction_f';
    
xcp.signals(100).symbol =  'Wind_Turbine_B.Gain_er';
    
xcp.signals(101).symbol =  'Wind_Turbine_B.N';
    
xcp.signals(102).symbol =  'Wind_Turbine_B.L';
    
xcp.signals(103).symbol =  'Wind_Turbine_B.Liftcosalpha';
    
xcp.signals(104).symbol =  'Wind_Turbine_B.Dragsinalpha';
    
xcp.signals(105).symbol =  'Wind_Turbine_B.Liftsinalpha';
    
xcp.signals(106).symbol =  'Wind_Turbine_B.Dragcosalpha';
    
xcp.signals(107).symbol =  'Wind_Turbine_B.X';
    
xcp.signals(108).symbol =  'Wind_Turbine_B.Z';
    
xcp.signals(109).symbol =  'Wind_Turbine_B.TrigonometricFunction1';
    
xcp.signals(110).symbol =  'Wind_Turbine_B.TrigonometricFunction2';
    
xcp.signals(111).symbol =  'Wind_Turbine_B.DataTypeConversion';
    
xcp.signals(112).symbol =  'Wind_Turbine_B.DataTypeConversion1_m';
    
xcp.signals(113).symbol =  'Wind_Turbine_B.DataTypeConversion2_k';
    
xcp.signals(114).symbol =  'Wind_Turbine_B.Gain3';
    
xcp.signals(115).symbol =  'Wind_Turbine_B.Gain4_b';
    
xcp.signals(116).symbol =  'Wind_Turbine_B.LogicalOperator_g';
    
xcp.signals(117).symbol =  'Wind_Turbine_B.LogicalOperator1_j';
    
xcp.signals(118).symbol =  'Wind_Turbine_B.MagnitudeAngletoComplex';
    
xcp.signals(119).symbol =  'Wind_Turbine_B.Amplitude';
    
xcp.signals(120).symbol =  'Wind_Turbine_B.Phase';
    
xcp.signals(121).symbol =  'Wind_Turbine_B.RelationalOperator3';
    
xcp.signals(122).symbol =  'Wind_Turbine_B.Ton_h';
    
xcp.signals(123).symbol =  'Wind_Turbine_B.Toff_e';
    
xcp.signals(124).symbol =  'Wind_Turbine_B.Sum2_i';
    
xcp.signals(125).symbol =  'Wind_Turbine_B.Sum3_b';
    
xcp.signals(126).symbol =  'Wind_Turbine_B.Sum4';
    
xcp.signals(127).symbol =  'Wind_Turbine_B.Sum5';
    
xcp.signals(128).symbol =  'Wind_Turbine_B.Switch1';
    
xcp.signals(129).symbol =  'Wind_Turbine_B.Switch2_o';
    
xcp.signals(130).symbol =  'Wind_Turbine_B.Switch3_e';
    
xcp.signals(131).symbol =  'Wind_Turbine_B.Switch5';
    
xcp.signals(132).symbol =  'Wind_Turbine_B.Magnitude';
    
xcp.signals(133).symbol =  'Wind_Turbine_B.pu2rpm';
    
xcp.signals(134).symbol =  'Wind_Turbine_B.radps2pu';
    
xcp.signals(135).symbol =  'Wind_Turbine_B.TurbineSpeedrpm';
    
xcp.signals(136).symbol =  'Wind_Turbine_B.torque_pu2Nm';
    
xcp.signals(137).symbol =  'Wind_Turbine_B.LogicalOperator1';
    
xcp.signals(138).symbol =  'Wind_Turbine_B.FixSign';
    
xcp.signals(139).symbol =  'Wind_Turbine_B.putoA';
    
xcp.signals(140).symbol =  'Wind_Turbine_B.putoMW';
    
xcp.signals(141).symbol =  'Wind_Turbine_B.putoMvar';
    
xcp.signals(142).symbol =  'Wind_Turbine_B.putoV';
    
xcp.signals(143).symbol =  'Wind_Turbine_B.topu';
    
xcp.signals(144).symbol =  'Wind_Turbine_B.FromWs';
    
xcp.signals(145).symbol =  'Wind_Turbine_B.IntegralGain_l';
    
xcp.signals(146).symbol =  'Wind_Turbine_B.ProportionalGain_e';
    
xcp.signals(147).symbol =  'Wind_Turbine_B.Integrator_iv';
    
xcp.signals(148).symbol =  'Wind_Turbine_B.Sum_ko';
    
xcp.signals(149).symbol =  'Wind_Turbine_B.IntegralGain_o';
    
xcp.signals(150).symbol =  'Wind_Turbine_B.ProportionalGain_e2';
    
xcp.signals(151).symbol =  'Wind_Turbine_B.Integrator_b';
    
xcp.signals(152).symbol =  'Wind_Turbine_B.Sum_eb';
    
xcp.signals(153).symbol =  'Wind_Turbine_B.RealImagtoComplex';
    
xcp.signals(154).symbol =  'Wind_Turbine_B.ComplextoRealImag_o1';
    
xcp.signals(155).symbol =  'Wind_Turbine_B.ComplextoRealImag_o2';
    
xcp.signals(156).symbol =  'Wind_Turbine_B.Gain3_j';
    
xcp.signals(157).symbol =  'Wind_Turbine_B.MagnitudeAngletoComplex_g';
    
xcp.signals(158).symbol =  'Wind_Turbine_B.MultiportSwitch';
    
xcp.signals(159).symbol =  'Wind_Turbine_B.Product1';
    
xcp.signals(160).symbol =  'Wind_Turbine_B.Sum_e';
    
xcp.signals(161).symbol =  'Wind_Turbine_B.Sum1_d';
    
xcp.signals(162).symbol =  'Wind_Turbine_B.Gain3_l';
    
xcp.signals(163).symbol =  'Wind_Turbine_B.MagnitudeAngletoComplex_a';
    
xcp.signals(164).symbol =  'Wind_Turbine_B.MultiportSwitch_j';
    
xcp.signals(165).symbol =  'Wind_Turbine_B.Product1_g';
    
xcp.signals(166).symbol =  'Wind_Turbine_B.Sum_j';
    
xcp.signals(167).symbol =  'Wind_Turbine_B.Sum1_i';
    
xcp.signals(168).symbol =  'Wind_Turbine_B.DataTypeConversion1';
    
xcp.signals(169).symbol =  'Wind_Turbine_B.DataTypeConversion2';
    
xcp.signals(170).symbol =  'Wind_Turbine_B.Gain1_h';
    
xcp.signals(171).symbol =  'Wind_Turbine_B.Ramp';
    
xcp.signals(172).symbol =  'Wind_Turbine_B.LogicalOperator';
    
xcp.signals(173).symbol =  'Wind_Turbine_B.LogicalOperator1_d';
    
xcp.signals(174).symbol =  'Wind_Turbine_B.Memory';
    
xcp.signals(175).symbol =  'Wind_Turbine_B.MultiportSwitch1';
    
xcp.signals(176).symbol =  'Wind_Turbine_B.Mod';
    
xcp.signals(177).symbol =  'Wind_Turbine_B.Product1_b';
    
xcp.signals(178).symbol =  'Wind_Turbine_B.Step_j';
    
xcp.signals(179).symbol =  'Wind_Turbine_B.RelationalOperator';
    
xcp.signals(180).symbol =  'Wind_Turbine_B.RelationalOperator1';
    
xcp.signals(181).symbol =  'Wind_Turbine_B.Ton';
    
xcp.signals(182).symbol =  'Wind_Turbine_B.Toff';
    
xcp.signals(183).symbol =  'Wind_Turbine_B.Switch_o';
    
xcp.signals(184).symbol =  'Wind_Turbine_B.Switch1_d';
    
xcp.signals(185).symbol =  'Wind_Turbine_B.Switch2';
    
xcp.signals(186).symbol =  'Wind_Turbine_B.Switch3';
    
xcp.signals(187).symbol =  'Wind_Turbine_B.TrigonometricFunction1_j';
    
xcp.signals(188).symbol =  'Wind_Turbine_B.donotdeletethisgain_h';
    
xcp.signals(189).symbol =  'Wind_Turbine_B.donotdeletethisgain_a';
    
xcp.signals(190).symbol =  'Wind_Turbine_B.donotdeletethisgain_k';
    
xcp.signals(191).symbol =  'Wind_Turbine_B.Gain_l';
    
xcp.signals(192).symbol =  'Wind_Turbine_B.Integrator_n';
    
xcp.signals(193).symbol =  'Wind_Turbine_B.Sum_d';
    
xcp.signals(194).symbol =  'Wind_Turbine_B.Gain_e';
    
xcp.signals(195).symbol =  'Wind_Turbine_B.Integrator_f';
    
xcp.signals(196).symbol =  'Wind_Turbine_B.Sum_n';
    
xcp.signals(197).symbol =  'Wind_Turbine_B.Kv';
    
xcp.signals(198).symbol =  'Wind_Turbine_B.Kv1';
    
xcp.signals(199).symbol =  'Wind_Turbine_B.Switch_j';
    
xcp.signals(200).symbol =  'Wind_Turbine_B.Switch1_b';
    
xcp.signals(201).symbol =  'Wind_Turbine_B.Switch2_ax';
    
xcp.signals(202).symbol =  'Wind_Turbine_B.Switch3_p';
    
xcp.signals(203).symbol =  'Wind_Turbine_B.Switch_i';
    
xcp.signals(204).symbol =  'Wind_Turbine_B.Switch1_g';
    
xcp.signals(205).symbol =  'Wind_Turbine_B.Switch2_g';
    
xcp.signals(206).symbol =  'Wind_Turbine_B.Switch3_f';
    
xcp.signals(207).symbol =  'Wind_Turbine_B.Gain_ax';
    
xcp.signals(208).symbol =  'Wind_Turbine_B.Gain1_c';
    
xcp.signals(209).symbol =  'Wind_Turbine_B.ScalingFactor';
    
xcp.signals(210).symbol =  'Wind_Turbine_B.Gain_ag';
    
xcp.signals(211).symbol =  'Wind_Turbine_B.Gain_jy';
    
xcp.signals(212).symbol =  'Wind_Turbine_B.Gain_i';
    
xcp.signals(213).symbol =  'Wind_Turbine_B.Derivative_Gain';
    
xcp.signals(214).symbol =  'Wind_Turbine_B.LookupFix';
    
xcp.signals(215).symbol =  'Wind_Turbine_B.AngletoExtension';
    
xcp.signals(216).symbol =  'Wind_Turbine_B.Sum_l';
    
xcp.signals(217).symbol =  'Wind_Turbine_B.Sum1_k';
    
xcp.signals(218).symbol =  'Wind_Turbine_B.LimitPitchCommand';
    
xcp.signals(219).symbol =  'Wind_Turbine_B.Sum_jc';
    
xcp.signals(220).symbol =  'Wind_Turbine_B.CheckForParkCondition';
    
xcp.signals(221).symbol =  'Wind_Turbine_B.CheckForPitchBrakeCondition';
    
xcp.signals(222).symbol =  'Wind_Turbine_B.ComplextoRealImag_o1_m';
    
xcp.signals(223).symbol =  'Wind_Turbine_B.ComplextoRealImag_o2_g';
    
xcp.signals(224).symbol =  'Wind_Turbine_B.K';
    
xcp.signals(225).symbol =  'Wind_Turbine_B.MathFunction';
    
xcp.signals(226).symbol =  'Wind_Turbine_B.Product2';
    
xcp.signals(227).symbol =  'Wind_Turbine_B.Sum3_k';
    
xcp.signals(228).symbol =  'Wind_Turbine_B.Gain_k';
    
xcp.signals(229).symbol =  'Wind_Turbine_B.integrator';
    
xcp.signals(230).symbol =  'Wind_Turbine_B.Step';
    
xcp.signals(231).symbol =  'Wind_Turbine_B.Sum_az';
    
xcp.signals(232).symbol =  'Wind_Turbine_B.Switch';
    
xcp.signals(233).symbol =  'Wind_Turbine_B.TransportDelay';
    
xcp.signals(234).symbol =  'Wind_Turbine_B.Gain_p';
    
xcp.signals(235).symbol =  'Wind_Turbine_B.integrator_h';
    
xcp.signals(236).symbol =  'Wind_Turbine_B.Step_p';
    
xcp.signals(237).symbol =  'Wind_Turbine_B.Sum_no';
    
xcp.signals(238).symbol =  'Wind_Turbine_B.Switch_c';
    
xcp.signals(239).symbol =  'Wind_Turbine_B.TransportDelay_l';
    
xcp.signals(240).symbol =  'Wind_Turbine_B.Clock';
    
xcp.signals(241).symbol =  'Wind_Turbine_B.Derivative';
    
xcp.signals(242).symbol =  'Wind_Turbine_B.LookUpTable';
    
xcp.signals(243).symbol =  'Wind_Turbine_B.EngagementPressure';
    
xcp.signals(244).symbol =  'Wind_Turbine_B.Saturation_c';
    
xcp.signals(245).symbol =  'Wind_Turbine_B.Sum_g';
    
xcp.signals(246).symbol =  'Wind_Turbine_B.irabc';
    
xcp.signals(247).symbol =  'Wind_Turbine_B.isabc';
    
xcp.signals(248).symbol =  'Wind_Turbine_B.u_Vb';
    
xcp.signals(249).symbol =  'Wind_Turbine_B.Gain_lj';
    
xcp.signals(250).symbol =  'Wind_Turbine_B.ib';
    
xcp.signals(251).symbol =  'Wind_Turbine_B.Product3_d';
    
xcp.signals(252).symbol =  'Wind_Turbine_B.Product4_o';
    
xcp.signals(253).symbol =  'Wind_Turbine_B.s2wswr';
    
xcp.signals(254).symbol =  'Wind_Turbine_B.NegseqTorque';
    
xcp.signals(255).symbol =  'Wind_Turbine_B.Sum5_a';
    
xcp.signals(256).symbol =  'Wind_Turbine_B.up';
    
xcp.signals(257).symbol =  'Wind_Turbine_B.Gain_o';
    
xcp.signals(258).symbol =  'Wind_Turbine_B.web_psb';
    
xcp.signals(259).symbol =  'Wind_Turbine_B.web_psb1';
    
xcp.signals(260).symbol =  'Wind_Turbine_B.Rotoranglethetam';
    
xcp.signals(261).symbol =  'Wind_Turbine_B.Gain_lm';
    
xcp.signals(262).symbol =  'Wind_Turbine_B.Integrator_if';
    
xcp.signals(263).symbol =  'Wind_Turbine_B.Sum_a';
    
xcp.signals(264).symbol =  'Wind_Turbine_B.Nacelle_Yaw_Angle';
    
xcp.signals(265).symbol =  'Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate_d';
    
xcp.signals(266).symbol =  'Wind_Turbine_B.ActuatorPositiontoNacelleAngle';
    
xcp.signals(267).symbol =  'Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate_a';
    
xcp.signals(268).symbol =  'Wind_Turbine_B.ActuatorPositiontoNacelleAngl_i';
    
xcp.signals(269).symbol =  'Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate_f';
    
xcp.signals(270).symbol =  'Wind_Turbine_B.ActuatorPositiontoNacelleAngl_k';
    
xcp.signals(271).symbol =  'Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate';
    
xcp.signals(272).symbol =  'Wind_Turbine_B.IntegralGain';
    
xcp.signals(273).symbol =  'Wind_Turbine_B.ProportionalGain_b';
    
xcp.signals(274).symbol =  'Wind_Turbine_B.Integrator_l';
    
xcp.signals(275).symbol =  'Wind_Turbine_B.Sum_e5';
    
xcp.signals(276).symbol =  'Wind_Turbine_B.rad2deg';
    
xcp.signals(277).symbol =  'Wind_Turbine_B.radps2mps';
    
xcp.signals(278).symbol =  'Wind_Turbine_B.TrigonometricFunction';
    
xcp.signals(279).symbol =  'Wind_Turbine_B.radps2rpm';
    
xcp.signals(280).symbol =  'Wind_Turbine_B.Saturation';
    
xcp.signals(281).symbol =  'Wind_Turbine_B.Sum_k';
    
xcp.signals(282).symbol =  'Wind_Turbine_B.W341wr';
    
xcp.signals(283).symbol =  'Wind_Turbine_B.W43wr1';
    
xcp.signals(284).symbol =  'Wind_Turbine_B.Gain2_o';
    
xcp.signals(285).symbol =  'Wind_Turbine_B.wewr';
    
xcp.signals(286).symbol =  'Wind_Turbine_B.ComplextoRealImag_o1_p';
    
xcp.signals(287).symbol =  'Wind_Turbine_B.ComplextoRealImag_o2_f';
    
xcp.signals(288).symbol =  'Wind_Turbine_B.ComplextoRealImag3_o1';
    
xcp.signals(289).symbol =  'Wind_Turbine_B.ComplextoRealImag3_o2';
    
xcp.signals(290).symbol =  'Wind_Turbine_B.a23';
    
xcp.signals(291).symbol =  'Wind_Turbine_B.Gain';
    
xcp.signals(292).symbol =  'Wind_Turbine_B.Gain1';
    
xcp.signals(293).symbol =  'Wind_Turbine_B.a3';
    
xcp.signals(294).symbol =  'Wind_Turbine_B.V1';
    
xcp.signals(295).symbol =  'Wind_Turbine_B.V2';
    
xcp.signals(296).symbol =  'Wind_Turbine_B.Product3_l';
    
xcp.signals(297).symbol =  'Wind_Turbine_B.A';
    
xcp.signals(298).symbol =  'Wind_Turbine_B.Linv';
    
xcp.signals(299).symbol =  'Wind_Turbine_B.RLinv';
    
xcp.signals(300).symbol =  'Wind_Turbine_B.Switch2_a';
    
xcp.signals(301).symbol =  'Wind_Turbine_B.Phids2';
    
xcp.signals(302).symbol =  'Wind_Turbine_B.Phiqs2';
    
xcp.signals(303).symbol =  'Wind_Turbine_B.Phi2';
    
xcp.signals(304).symbol =  'Wind_Turbine_B.Gain1_e';
    
xcp.signals(305).symbol =  'Wind_Turbine_B.Gain2';
    
xcp.signals(306).symbol =  'Wind_Turbine_B.Gain3_d';
    
xcp.signals(307).symbol =  'Wind_Turbine_B.Gain4';
    
xcp.signals(308).symbol =  'Wind_Turbine_B.Iqds2';
    
xcp.signals(309).symbol =  'Wind_Turbine_B.Iqd2R2L2';
    
xcp.signals(310).symbol =  'Wind_Turbine_B.Vqd2L2';
    
xcp.signals(311).symbol =  'Wind_Turbine_B.Product3';
    
xcp.signals(312).symbol =  'Wind_Turbine_B.RealImagtoComplex_b';
    
xcp.signals(313).symbol =  'Wind_Turbine_B.RealImagtoComplex1';
    
xcp.signals(314).symbol =  'Wind_Turbine_B.Sum_df';
    
xcp.signals(315).symbol =  'Wind_Turbine_B.Vm2';
    
xcp.signals(316).symbol =  'Wind_Turbine_B.donotdeletethisgain_ee';
    
xcp.signals(317).symbol =  'Wind_Turbine_B.donotdeletethisgain_g1';
    
xcp.signals(318).symbol =  'Wind_Turbine_B.donotdeletethisgain_i';
    
xcp.signals(319).symbol =  'Wind_Turbine_B.donotdeletethisgain';
    
xcp.signals(320).symbol =  'Wind_Turbine_B.donotdeletethisgain_g';
    
xcp.signals(321).symbol =  'Wind_Turbine_B.donotdeletethisgain_e';
    
xcp.signals(322).symbol =  'Wind_Turbine_B.DataTypeConversion_j';
    
xcp.signals(323).symbol =  'Wind_Turbine_B.Switch3_d';
    
xcp.signals(324).symbol =  'Wind_Turbine_B.DataTypeConversion_b';
    
xcp.signals(325).symbol =  'Wind_Turbine_B.Switch3_j';
    
xcp.signals(326).symbol =  'Wind_Turbine_B.DataTypeConversion_n';
    
xcp.signals(327).symbol =  'Wind_Turbine_B.Switch3_dw';
    
xcp.signals(328).symbol =  'Wind_Turbine_B.Clock_o';
    
xcp.signals(329).symbol =  'Wind_Turbine_B.Derivative_p';
    
xcp.signals(330).symbol =  'Wind_Turbine_B.LookUpTable_i';
    
xcp.signals(331).symbol =  'Wind_Turbine_B.DataTypeConversion_f';
    
xcp.signals(332).symbol =  'Wind_Turbine_B.Switch3_er';
    
xcp.signals(333).symbol =  'Wind_Turbine_B.DataTypeConversion_l';
    
xcp.signals(334).symbol =  'Wind_Turbine_B.Switch3_a';
    
xcp.signals(335).symbol =  'Wind_Turbine_B.DataTypeConversion_k';
    
xcp.signals(336).symbol =  'Wind_Turbine_B.Switch3_h';
    
xcp.signals(337).symbol =  'Wind_Turbine_B.Clock_e';
    
xcp.signals(338).symbol =  'Wind_Turbine_B.Derivative_i';
    
xcp.signals(339).symbol =  'Wind_Turbine_B.LookUpTable_g';
    
xcp.signals(340).symbol =  'Wind_Turbine_B.GAIN_i';
    
xcp.signals(341).symbol =  'Wind_Turbine_B.Switch_h';
    
xcp.signals(342).symbol =  'Wind_Turbine_B.Switch_hx';
    
xcp.signals(343).symbol =  'Wind_Turbine_B.Switch_d';
    
xcp.signals(344).symbol =  'Wind_Turbine_B.IntegralGain_b';
    
xcp.signals(345).symbol =  'Wind_Turbine_B.ProportionalGain';
    
xcp.signals(346).symbol =  'Wind_Turbine_B.Integrator_m';
    
xcp.signals(347).symbol =  'Wind_Turbine_B.Sum_o';
    
xcp.signals(348).symbol =  'Wind_Turbine_B.a_g';
    
xcp.signals(349).symbol =  'Wind_Turbine_B.a2_k';
    
xcp.signals(350).symbol =  'Wind_Turbine_B.ic';
    
xcp.signals(351).symbol =  'Wind_Turbine_B.I1_c';
    
xcp.signals(352).symbol =  'Wind_Turbine_B.Sum';
    
xcp.signals(353).symbol =  'Wind_Turbine_B.Sum1_b';
    
xcp.signals(354).symbol =  'Wind_Turbine_B.Sum3_i';
    
xcp.signals(355).symbol =  'Wind_Turbine_B.a';
    
xcp.signals(356).symbol =  'Wind_Turbine_B.a2';
    
xcp.signals(357).symbol =  'Wind_Turbine_B.ic_g';
    
xcp.signals(358).symbol =  'Wind_Turbine_B.I1';
    
xcp.signals(359).symbol =  'Wind_Turbine_B.Sum_f';
    
xcp.signals(360).symbol =  'Wind_Turbine_B.Sum1';
    
xcp.signals(361).symbol =  'Wind_Turbine_B.Sum3';
    
xcp.signals(362).symbol =  'Wind_Turbine_B.iqsids';
    
xcp.signals(363).symbol =  'Wind_Turbine_B.Mult1';
    
xcp.signals(364).symbol =  'Wind_Turbine_B.Sum2_a';
    
xcp.signals(365).symbol =  'Wind_Turbine_B.Isat';
    
xcp.signals(366).symbol =  'Wind_Turbine_B.Phisat';
    
xcp.signals(367).symbol =  'Wind_Turbine_B.Lm_l';
    
xcp.signals(368).symbol =  'Wind_Turbine_B.RLinv_n';
    
xcp.signals(369).symbol =  'Wind_Turbine_B.Linv_b';
    
xcp.signals(370).symbol =  'Wind_Turbine_B.Lm';
    
xcp.signals(371).symbol =  'Wind_Turbine_B.wbase';
    
xcp.signals(372).symbol =  'Wind_Turbine_B.Integrator_pj';
    
xcp.signals(373).symbol =  'Wind_Turbine_B.Product1_j';
    
xcp.signals(374).symbol =  'Wind_Turbine_B.sum1';
    
xcp.signals(375).symbol =  'Wind_Turbine_B.ComplextoRealImag_o1_a';
    
xcp.signals(376).symbol =  'Wind_Turbine_B.ComplextoRealImag_o2_d';
    
xcp.signals(377).symbol =  'Wind_Turbine_B.Product1_c';
    
xcp.signals(378).symbol =  'Wind_Turbine_B.ZrZm_k';
    
xcp.signals(379).symbol =  'Wind_Turbine_B.ZrZm_m';
    
xcp.signals(380).symbol =  'Wind_Turbine_B.Product4';
    
xcp.signals(381).symbol =  'Wind_Turbine_B.ZrZm';
    
xcp.signals(382).symbol =  'Wind_Turbine_B.Z2';
    
xcp.signals(383).symbol =  'Wind_Turbine_B.Clock_a';
    
xcp.signals(384).symbol =  'Wind_Turbine_B.Derivative_m';
    
xcp.signals(385).symbol =  'Wind_Turbine_B.LookUpTable_n';
    
xcp.signals(386).symbol =  'Wind_Turbine_B.Clock_az';
    
xcp.signals(387).symbol =  'Wind_Turbine_B.Derivative_o';
    
xcp.signals(388).symbol =  'Wind_Turbine_B.LookUpTable_k';
    
xcp.signals(389).symbol =  'Wind_Turbine_B.Clock_k';
    
xcp.signals(390).symbol =  'Wind_Turbine_B.Derivative_f';
    
xcp.signals(391).symbol =  'Wind_Turbine_B.LookUpTable_l';
    
xcp.signals(392).symbol =  'Wind_Turbine_B.Clock_l';
    
xcp.signals(393).symbol =  'Wind_Turbine_B.Derivative_pb';
    
xcp.signals(394).symbol =  'Wind_Turbine_B.LookUpTable_j';
    
xcp.signals(395).symbol =  'Wind_Turbine_B.Clock_f';
    
xcp.signals(396).symbol =  'Wind_Turbine_B.Derivative_m5';
    
xcp.signals(397).symbol =  'Wind_Turbine_B.LookUpTable_o';
    
xcp.signals(398).symbol =  'Wind_Turbine_B.Clock_m';
    
xcp.signals(399).symbol =  'Wind_Turbine_B.Derivative_j';
    
xcp.signals(400).symbol =  'Wind_Turbine_B.LookUpTable_h';
    
xcp.signals(401).symbol =  'Wind_Turbine_B.Gain_d';
    
xcp.signals(402).symbol =  'Wind_Turbine_B.Integrator';
    
xcp.signals(403).symbol =  'Wind_Turbine_B.Sum_gk';
    
xcp.signals(404).symbol =  'Wind_Turbine_B.Gain_a';
    
xcp.signals(405).symbol =  'Wind_Turbine_B.Integrator_i';
    
xcp.signals(406).symbol =  'Wind_Turbine_B.Sum_g5';
    
xcp.signals(407).symbol =  'Wind_Turbine_B.Gain_g';
    
xcp.signals(408).symbol =  'Wind_Turbine_B.Integrator_p';
    
xcp.signals(409).symbol =  'Wind_Turbine_B.Sum_p';
    
xcp.signals(410).symbol =  'Wind_Turbine_B.GAIN';
    
xcp.signals(411).symbol =  'Wind_Turbine_B.GAIN_ds';
    
xcp.signals(412).symbol =  'Wind_Turbine_B.GAIN_d';
    
xcp.signals(413).symbol =  'Wind_Turbine_B.GAIN_o';
    
xcp.signals(414).symbol =  'Wind_Turbine_B.GAIN_fl';
    
xcp.signals(415).symbol =  'Wind_Turbine_B.GAIN_oq';
    
xcp.signals(416).symbol =  'Wind_Turbine_B.GAIN_p';
    
xcp.signals(417).symbol =  'Wind_Turbine_B.GAIN_f';
    
xcp.signals(418).symbol =  'Wind_Turbine_B.MathFunction_a';
    
xcp.signals(419).symbol =  'Wind_Turbine_B.MathFunction1_m';
    
xcp.signals(420).symbol =  'Wind_Turbine_B.Sum2_h';
    
xcp.signals(421).symbol =  'Wind_Turbine_B.Lminrows13col13';
    
xcp.signals(422).symbol =  'Wind_Turbine_B.Lminrows24col24';
    
xcp.signals(423).symbol =  'Wind_Turbine_B.Sum2_b';
    
xcp.signals(424).symbol =  'Wind_Turbine_B.uTT1e6s';
    
xcp.signals(425).symbol =  'Wind_Turbine_B.Integrator_g';
    
xcp.signals(426).symbol =  'Wind_Turbine_B.Add';
    
xcp.signals(427).symbol =  'Wind_Turbine_B.Product';
    
xcp.signals(428).symbol =  'Wind_Turbine_B.Product1_p';
    
xcp.signals(429).symbol =  'Wind_Turbine_B.Product2_p';
    
xcp.signals(430).symbol =  'Wind_Turbine_B.phimd';
    
xcp.signals(431).symbol =  'Wind_Turbine_B.phimq';
    
xcp.signals(432).symbol =  'Wind_Turbine_B.Product2_g';
    
xcp.signals(433).symbol =  'Wind_Turbine_B.Sum2';
    
xcp.signals(434).symbol =  'Wind_Turbine_B.GAIN_dl';
    
xcp.signals(435).symbol =  'Wind_Turbine_B.GAIN_d1';
    
xcp.signals(436).symbol =  'Wind_Turbine_B.GAIN_g';
    
xcp.signals(437).symbol =  'Wind_Turbine_B.GAIN_o1';
         
xcp.parameters(1).symbol = 'Wind_Turbine_P.PitchPowerOn_Time';
xcp.parameters(1).size   =  1;       
xcp.parameters(1).dtname = 'real_T'; 
xcp.parameters(2).baseaddr = '&Wind_Turbine_P.PitchPowerOn_Time';     
         
xcp.parameters(2).symbol = 'Wind_Turbine_P.PitchPowerOn_Y0';
xcp.parameters(2).size   =  1;       
xcp.parameters(2).dtname = 'real_T'; 
xcp.parameters(3).baseaddr = '&Wind_Turbine_P.PitchPowerOn_Y0';     
         
xcp.parameters(3).symbol = 'Wind_Turbine_P.PitchPowerOn_YFinal';
xcp.parameters(3).size   =  1;       
xcp.parameters(3).dtname = 'real_T'; 
xcp.parameters(4).baseaddr = '&Wind_Turbine_P.PitchPowerOn_YFinal';     
         
xcp.parameters(4).symbol = 'Wind_Turbine_P.Grid_VariationEntity';
xcp.parameters(4).size   =  1;       
xcp.parameters(4).dtname = 'real_T'; 
xcp.parameters(5).baseaddr = '&Wind_Turbine_P.Grid_VariationEntity';     
         
xcp.parameters(5).symbol = 'Wind_Turbine_P.Grid_HarmonicGeneration';
xcp.parameters(5).size   =  1;       
xcp.parameters(5).dtname = 'real_T'; 
xcp.parameters(6).baseaddr = '&Wind_Turbine_P.Grid_HarmonicGeneration';     
         
xcp.parameters(6).symbol = 'Wind_Turbine_P.LagPitch_x_initial';
xcp.parameters(6).size   =  1;       
xcp.parameters(6).dtname = 'real_T'; 
xcp.parameters(7).baseaddr = '&Wind_Turbine_P.LagPitch_x_initial';     
         
xcp.parameters(7).symbol = 'Wind_Turbine_P.LagRotorSpd_x_initial';
xcp.parameters(7).size   =  1;       
xcp.parameters(7).dtname = 'real_T'; 
xcp.parameters(8).baseaddr = '&Wind_Turbine_P.LagRotorSpd_x_initial';     
         
xcp.parameters(8).symbol = 'Wind_Turbine_P.PointofApplication_Gain';
xcp.parameters(8).size   =  1;       
xcp.parameters(8).dtname = 'real_T'; 
xcp.parameters(9).baseaddr = '&Wind_Turbine_P.PointofApplication_Gain';     
         
xcp.parameters(9).symbol = 'Wind_Turbine_P.Kv_Gain_l';
xcp.parameters(9).size   =  1;       
xcp.parameters(9).dtname = 'real_T'; 
xcp.parameters(10).baseaddr = '&Wind_Turbine_P.Kv_Gain_l';     
         
xcp.parameters(10).symbol = 'Wind_Turbine_P.Kv1_Gain_p';
xcp.parameters(10).size   =  1;       
xcp.parameters(10).dtname = 'real_T'; 
xcp.parameters(11).baseaddr = '&Wind_Turbine_P.Kv1_Gain_p';     
         
xcp.parameters(11).symbol = 'Wind_Turbine_P.Saturation_UpperSat_h';
xcp.parameters(11).size   =  1;       
xcp.parameters(11).dtname = 'real_T'; 
xcp.parameters(12).baseaddr = '&Wind_Turbine_P.Saturation_UpperSat_h';     
         
xcp.parameters(12).symbol = 'Wind_Turbine_P.Saturation_LowerSat_mc';
xcp.parameters(12).size   =  1;       
xcp.parameters(12).dtname = 'real_T'; 
xcp.parameters(13).baseaddr = '&Wind_Turbine_P.Saturation_LowerSat_mc';     
         
xcp.parameters(13).symbol = 'Wind_Turbine_P.LimitServomotorTorqueCmd_UpperS';
xcp.parameters(13).size   =  1;       
xcp.parameters(13).dtname = 'real_T'; 
xcp.parameters(14).baseaddr = '&Wind_Turbine_P.LimitServomotorTorqueCmd_UpperS';     
         
xcp.parameters(14).symbol = 'Wind_Turbine_P.LimitServomotorTorqueCmd_LowerS';
xcp.parameters(14).size   =  1;       
xcp.parameters(14).dtname = 'real_T'; 
xcp.parameters(15).baseaddr = '&Wind_Turbine_P.LimitServomotorTorqueCmd_LowerS';     
         
xcp.parameters(15).symbol = 'Wind_Turbine_P.StateSpace_P1';
xcp.parameters(15).size   =  187;       
xcp.parameters(15).dtname = 'real_T'; 
xcp.parameters(16).baseaddr = '&Wind_Turbine_P.StateSpace_P1[0]';     
         
xcp.parameters(16).symbol = 'Wind_Turbine_P.StateSpace_P2';
xcp.parameters(16).size   =  187;       
xcp.parameters(16).dtname = 'real_T'; 
xcp.parameters(17).baseaddr = '&Wind_Turbine_P.StateSpace_P2[0]';     
         
xcp.parameters(17).symbol = 'Wind_Turbine_P.StateSpace_P3';
xcp.parameters(17).size   =  6;       
xcp.parameters(17).dtname = 'real_T'; 
xcp.parameters(18).baseaddr = '&Wind_Turbine_P.StateSpace_P3[0]';     
         
xcp.parameters(18).symbol = 'Wind_Turbine_P.StateSpace_P4';
xcp.parameters(18).size   =  5;       
xcp.parameters(18).dtname = 'real_T'; 
xcp.parameters(19).baseaddr = '&Wind_Turbine_P.StateSpace_P4[0]';     
         
xcp.parameters(19).symbol = 'Wind_Turbine_P.PitchMoment_Value';
xcp.parameters(19).size   =  1;       
xcp.parameters(19).dtname = 'real_T'; 
xcp.parameters(20).baseaddr = '&Wind_Turbine_P.PitchMoment_Value';     
         
xcp.parameters(20).symbol = 'Wind_Turbine_P.Gain_Gain_f';
xcp.parameters(20).size   =  1;       
xcp.parameters(20).dtname = 'real_T'; 
xcp.parameters(21).baseaddr = '&Wind_Turbine_P.Gain_Gain_f';     
         
xcp.parameters(21).symbol = 'Wind_Turbine_P.f2_Value';
xcp.parameters(21).size   =  1;       
xcp.parameters(21).dtname = 'real_T'; 
xcp.parameters(22).baseaddr = '&Wind_Turbine_P.f2_Value';     
         
xcp.parameters(22).symbol = 'Wind_Turbine_P.f1_Value';
xcp.parameters(22).size   =  1;       
xcp.parameters(22).dtname = 'real_T'; 
xcp.parameters(23).baseaddr = '&Wind_Turbine_P.f1_Value';     
         
xcp.parameters(23).symbol = 'Wind_Turbine_P.Gain_Gain_g';
xcp.parameters(23).size   =  1;       
xcp.parameters(23).dtname = 'real_T'; 
xcp.parameters(24).baseaddr = '&Wind_Turbine_P.Gain_Gain_g';     
         
xcp.parameters(24).symbol = 'Wind_Turbine_P.SeqAGeneration_Mag_Harmo';
xcp.parameters(24).size   =  1;       
xcp.parameters(24).dtname = 'real_T'; 
xcp.parameters(25).baseaddr = '&Wind_Turbine_P.SeqAGeneration_Mag_Harmo';     
         
xcp.parameters(25).symbol = 'Wind_Turbine_P.SeqAGeneration_Phase_Harmo';
xcp.parameters(25).size   =  1;       
xcp.parameters(25).dtname = 'real_T'; 
xcp.parameters(26).baseaddr = '&Wind_Turbine_P.SeqAGeneration_Phase_Harmo';     
         
xcp.parameters(26).symbol = 'Wind_Turbine_P.SeqAGeneration_Seq_Harmo';
xcp.parameters(26).size   =  1;       
xcp.parameters(26).dtname = 'real_T'; 
xcp.parameters(27).baseaddr = '&Wind_Turbine_P.SeqAGeneration_Seq_Harmo';     
         
xcp.parameters(27).symbol = 'Wind_Turbine_P.SeqBGeneration_Mag_Harmo';
xcp.parameters(27).size   =  1;       
xcp.parameters(27).dtname = 'real_T'; 
xcp.parameters(28).baseaddr = '&Wind_Turbine_P.SeqBGeneration_Mag_Harmo';     
         
xcp.parameters(28).symbol = 'Wind_Turbine_P.SeqBGeneration_Phase_Harmo';
xcp.parameters(28).size   =  1;       
xcp.parameters(28).dtname = 'real_T'; 
xcp.parameters(29).baseaddr = '&Wind_Turbine_P.SeqBGeneration_Phase_Harmo';     
         
xcp.parameters(29).symbol = 'Wind_Turbine_P.SeqBGeneration_Seq_Harmo';
xcp.parameters(29).size   =  1;       
xcp.parameters(29).dtname = 'real_T'; 
xcp.parameters(30).baseaddr = '&Wind_Turbine_P.SeqBGeneration_Seq_Harmo';     
         
xcp.parameters(30).symbol = 'Wind_Turbine_P.VariationSubSystem_VariationSte';
xcp.parameters(30).size   =  1;       
xcp.parameters(30).dtname = 'real_T'; 
xcp.parameters(31).baseaddr = '&Wind_Turbine_P.VariationSubSystem_VariationSte';     
         
xcp.parameters(31).symbol = 'Wind_Turbine_P.VariationSubSystem_VariationRat';
xcp.parameters(31).size   =  1;       
xcp.parameters(31).dtname = 'real_T'; 
xcp.parameters(32).baseaddr = '&Wind_Turbine_P.VariationSubSystem_VariationRat';     
         
xcp.parameters(32).symbol = 'Wind_Turbine_P.VariationSubSystem_VariationFre';
xcp.parameters(32).size   =  1;       
xcp.parameters(32).dtname = 'real_T'; 
xcp.parameters(33).baseaddr = '&Wind_Turbine_P.VariationSubSystem_VariationFre';     
         
xcp.parameters(33).symbol = 'Wind_Turbine_P.VariationSubSystem_VariationMag';
xcp.parameters(33).size   =  1;       
xcp.parameters(33).dtname = 'real_T'; 
xcp.parameters(34).baseaddr = '&Wind_Turbine_P.VariationSubSystem_VariationMag';     
         
xcp.parameters(34).symbol = 'Wind_Turbine_P.VariationSubSystem_Ton_Variatio';
xcp.parameters(34).size   =  1;       
xcp.parameters(34).dtname = 'real_T'; 
xcp.parameters(35).baseaddr = '&Wind_Turbine_P.VariationSubSystem_Ton_Variatio';     
         
xcp.parameters(35).symbol = 'Wind_Turbine_P.VariationSubSystem_Toff_Variati';
xcp.parameters(35).size   =  1;       
xcp.parameters(35).dtname = 'real_T'; 
xcp.parameters(36).baseaddr = '&Wind_Turbine_P.VariationSubSystem_Toff_Variati';     
         
xcp.parameters(36).symbol = 'Wind_Turbine_P.Constant_Value_i';
xcp.parameters(36).size   =  1;       
xcp.parameters(36).dtname = 'real_T'; 
xcp.parameters(37).baseaddr = '&Wind_Turbine_P.Constant_Value_i';     
         
xcp.parameters(37).symbol = 'Wind_Turbine_P.Constant1_Value_nt';
xcp.parameters(37).size   =  1;       
xcp.parameters(37).dtname = 'real_T'; 
xcp.parameters(38).baseaddr = '&Wind_Turbine_P.Constant1_Value_nt';     
         
xcp.parameters(38).symbol = 'Wind_Turbine_P.Constant2_Value_f';
xcp.parameters(38).size   =  1;       
xcp.parameters(38).dtname = 'real_T'; 
xcp.parameters(39).baseaddr = '&Wind_Turbine_P.Constant2_Value_f';     
         
xcp.parameters(39).symbol = 'Wind_Turbine_P.Constant4_Value';
xcp.parameters(39).size   =  1;       
xcp.parameters(39).dtname = 'real_T'; 
xcp.parameters(40).baseaddr = '&Wind_Turbine_P.Constant4_Value';     
         
xcp.parameters(40).symbol = 'Wind_Turbine_P.Constant6_Value';
xcp.parameters(40).size   =  1;       
xcp.parameters(40).dtname = 'real_T'; 
xcp.parameters(41).baseaddr = '&Wind_Turbine_P.Constant6_Value';     
         
xcp.parameters(41).symbol = 'Wind_Turbine_P.P1_Value';
xcp.parameters(41).size   =  3;       
xcp.parameters(41).dtname = 'real_T'; 
xcp.parameters(42).baseaddr = '&Wind_Turbine_P.P1_Value[0]';     
         
xcp.parameters(42).symbol = 'Wind_Turbine_P.SinglePhase_Value';
xcp.parameters(42).size   =  1;       
xcp.parameters(42).dtname = 'real_T'; 
xcp.parameters(43).baseaddr = '&Wind_Turbine_P.SinglePhase_Value';     
         
xcp.parameters(43).symbol = 'Wind_Turbine_P.valp_nom_Value';
xcp.parameters(43).size   =  1;       
xcp.parameters(43).dtname = 'real_T'; 
xcp.parameters(44).baseaddr = '&Wind_Turbine_P.valp_nom_Value';     
         
xcp.parameters(44).symbol = 'Wind_Turbine_P.valp_nom2_Value';
xcp.parameters(44).size   =  1;       
xcp.parameters(44).dtname = 'real_T'; 
xcp.parameters(45).baseaddr = '&Wind_Turbine_P.valp_nom2_Value';     
         
xcp.parameters(45).symbol = 'Wind_Turbine_P.valp_nom5_Value';
xcp.parameters(45).size   =  1;       
xcp.parameters(45).dtname = 'real_T'; 
xcp.parameters(46).baseaddr = '&Wind_Turbine_P.valp_nom5_Value';     
         
xcp.parameters(46).symbol = 'Wind_Turbine_P.Gain3_Gain';
xcp.parameters(46).size   =  1;       
xcp.parameters(46).dtname = 'real_T'; 
xcp.parameters(47).baseaddr = '&Wind_Turbine_P.Gain3_Gain';     
         
xcp.parameters(47).symbol = 'Wind_Turbine_P.Gain4_Gain';
xcp.parameters(47).size   =  1;       
xcp.parameters(47).dtname = 'real_T'; 
xcp.parameters(48).baseaddr = '&Wind_Turbine_P.Gain4_Gain';     
         
xcp.parameters(48).symbol = 'Wind_Turbine_P.Step_Time';
xcp.parameters(48).size   =  1;       
xcp.parameters(48).dtname = 'real_T'; 
xcp.parameters(49).baseaddr = '&Wind_Turbine_P.Step_Time';     
         
xcp.parameters(49).symbol = 'Wind_Turbine_P.Step_Y0_a';
xcp.parameters(49).size   =  1;       
xcp.parameters(49).dtname = 'real_T'; 
xcp.parameters(50).baseaddr = '&Wind_Turbine_P.Step_Y0_a';     
         
xcp.parameters(50).symbol = 'Wind_Turbine_P.Step_YFinal_c';
xcp.parameters(50).size   =  1;       
xcp.parameters(50).dtname = 'real_T'; 
xcp.parameters(51).baseaddr = '&Wind_Turbine_P.Step_YFinal_c';     
         
xcp.parameters(51).symbol = 'Wind_Turbine_P.Step1_Time';
xcp.parameters(51).size   =  1;       
xcp.parameters(51).dtname = 'real_T'; 
xcp.parameters(52).baseaddr = '&Wind_Turbine_P.Step1_Time';     
         
xcp.parameters(52).symbol = 'Wind_Turbine_P.Step1_Y0_j';
xcp.parameters(52).size   =  1;       
xcp.parameters(52).dtname = 'real_T'; 
xcp.parameters(53).baseaddr = '&Wind_Turbine_P.Step1_Y0_j';     
         
xcp.parameters(53).symbol = 'Wind_Turbine_P.Step1_YFinal_d';
xcp.parameters(53).size   =  1;       
xcp.parameters(53).dtname = 'real_T'; 
xcp.parameters(54).baseaddr = '&Wind_Turbine_P.Step1_YFinal_d';     
         
xcp.parameters(54).symbol = 'Wind_Turbine_P.Switch5_Threshold';
xcp.parameters(54).size   =  1;       
xcp.parameters(54).dtname = 'real_T'; 
xcp.parameters(55).baseaddr = '&Wind_Turbine_P.Switch5_Threshold';     
         
xcp.parameters(55).symbol = 'Wind_Turbine_P.ActuatorDynamics_x_initial_n';
xcp.parameters(55).size   =  1;       
xcp.parameters(55).dtname = 'real_T'; 
xcp.parameters(56).baseaddr = '&Wind_Turbine_P.ActuatorDynamics_x_initial_n';     
         
xcp.parameters(56).symbol = 'Wind_Turbine_P.ActuatorDynamics1_x_initial';
xcp.parameters(56).size   =  1;       
xcp.parameters(56).dtname = 'real_T'; 
xcp.parameters(57).baseaddr = '&Wind_Turbine_P.ActuatorDynamics1_x_initial';     
         
xcp.parameters(57).symbol = 'Wind_Turbine_P.TripBreaker1_SwitchA';
xcp.parameters(57).size   =  1;       
xcp.parameters(57).dtname = 'real_T'; 
xcp.parameters(58).baseaddr = '&Wind_Turbine_P.TripBreaker1_SwitchA';     
         
xcp.parameters(58).symbol = 'Wind_Turbine_P.TripBreaker1_SwitchB';
xcp.parameters(58).size   =  1;       
xcp.parameters(58).dtname = 'real_T'; 
xcp.parameters(59).baseaddr = '&Wind_Turbine_P.TripBreaker1_SwitchB';     
         
xcp.parameters(59).symbol = 'Wind_Turbine_P.TripBreaker1_SwitchC';
xcp.parameters(59).size   =  1;       
xcp.parameters(59).dtname = 'real_T'; 
xcp.parameters(60).baseaddr = '&Wind_Turbine_P.TripBreaker1_SwitchC';     
         
xcp.parameters(60).symbol = 'Wind_Turbine_P.TripBreaker2_SwitchA';
xcp.parameters(60).size   =  1;       
xcp.parameters(60).dtname = 'real_T'; 
xcp.parameters(61).baseaddr = '&Wind_Turbine_P.TripBreaker2_SwitchA';     
         
xcp.parameters(61).symbol = 'Wind_Turbine_P.TripBreaker2_SwitchB';
xcp.parameters(61).size   =  1;       
xcp.parameters(61).dtname = 'real_T'; 
xcp.parameters(62).baseaddr = '&Wind_Turbine_P.TripBreaker2_SwitchB';     
         
xcp.parameters(62).symbol = 'Wind_Turbine_P.TripBreaker2_SwitchC';
xcp.parameters(62).size   =  1;       
xcp.parameters(62).dtname = 'real_T'; 
xcp.parameters(63).baseaddr = '&Wind_Turbine_P.TripBreaker2_SwitchC';     
         
xcp.parameters(63).symbol = 'Wind_Turbine_P.Constant1_Value_g';
xcp.parameters(63).size   =  1;       
xcp.parameters(63).dtname = 'real_T'; 
xcp.parameters(64).baseaddr = '&Wind_Turbine_P.Constant1_Value_g';     
         
xcp.parameters(64).symbol = 'Wind_Turbine_P.FixSign_Gain';
xcp.parameters(64).size   =  1;       
xcp.parameters(64).dtname = 'real_T'; 
xcp.parameters(65).baseaddr = '&Wind_Turbine_P.FixSign_Gain';     
         
xcp.parameters(65).symbol = 'Wind_Turbine_P.Integrator_IC_di';
xcp.parameters(65).size   =  1;       
xcp.parameters(65).dtname = 'real_T'; 
xcp.parameters(66).baseaddr = '&Wind_Turbine_P.Integrator_IC_di';     
         
xcp.parameters(66).symbol = 'Wind_Turbine_P.Integrator_IC_gs';
xcp.parameters(66).size   =  1;       
xcp.parameters(66).dtname = 'real_T'; 
xcp.parameters(67).baseaddr = '&Wind_Turbine_P.Integrator_IC_gs';     
         
xcp.parameters(67).symbol = 'Wind_Turbine_P.Integrator_UpperSat';
xcp.parameters(67).size   =  1;       
xcp.parameters(67).dtname = 'real_T'; 
xcp.parameters(68).baseaddr = '&Wind_Turbine_P.Integrator_UpperSat';     
         
xcp.parameters(68).symbol = 'Wind_Turbine_P.Integrator_LowerSat';
xcp.parameters(68).size   =  1;       
xcp.parameters(68).dtname = 'real_T'; 
xcp.parameters(69).baseaddr = '&Wind_Turbine_P.Integrator_LowerSat';     
         
xcp.parameters(69).symbol = 'Wind_Turbine_P.SwitchCurrents_Value';
xcp.parameters(69).size   =  6;       
xcp.parameters(69).dtname = 'real_T'; 
xcp.parameters(70).baseaddr = '&Wind_Turbine_P.SwitchCurrents_Value[0].re';     
         
xcp.parameters(70).symbol = 'Wind_Turbine_P.Negativesequence_Value';
xcp.parameters(70).size   =  3;       
xcp.parameters(70).dtname = 'real_T'; 
xcp.parameters(71).baseaddr = '&Wind_Turbine_P.Negativesequence_Value[0]';     
         
xcp.parameters(71).symbol = 'Wind_Turbine_P.Positivesequence_Value';
xcp.parameters(71).size   =  3;       
xcp.parameters(71).dtname = 'real_T'; 
xcp.parameters(72).baseaddr = '&Wind_Turbine_P.Positivesequence_Value[0]';     
         
xcp.parameters(72).symbol = 'Wind_Turbine_P.Zerosequence_Value';
xcp.parameters(72).size   =  3;       
xcp.parameters(72).dtname = 'real_T'; 
xcp.parameters(73).baseaddr = '&Wind_Turbine_P.Zerosequence_Value[0]';     
         
xcp.parameters(73).symbol = 'Wind_Turbine_P.valp_nom2_Value_p';
xcp.parameters(73).size   =  1;       
xcp.parameters(73).dtname = 'real_T'; 
xcp.parameters(74).baseaddr = '&Wind_Turbine_P.valp_nom2_Value_p';     
         
xcp.parameters(74).symbol = 'Wind_Turbine_P.Gain3_Gain_f';
xcp.parameters(74).size   =  1;       
xcp.parameters(74).dtname = 'real_T'; 
xcp.parameters(75).baseaddr = '&Wind_Turbine_P.Gain3_Gain_f';     
         
xcp.parameters(75).symbol = 'Wind_Turbine_P.Negativesequence_Value_l';
xcp.parameters(75).size   =  3;       
xcp.parameters(75).dtname = 'real_T'; 
xcp.parameters(76).baseaddr = '&Wind_Turbine_P.Negativesequence_Value_l[0]';     
         
xcp.parameters(76).symbol = 'Wind_Turbine_P.Positivesequence_Value_d';
xcp.parameters(76).size   =  3;       
xcp.parameters(76).dtname = 'real_T'; 
xcp.parameters(77).baseaddr = '&Wind_Turbine_P.Positivesequence_Value_d[0]';     
         
xcp.parameters(77).symbol = 'Wind_Turbine_P.Zerosequence_Value_d';
xcp.parameters(77).size   =  3;       
xcp.parameters(77).dtname = 'real_T'; 
xcp.parameters(78).baseaddr = '&Wind_Turbine_P.Zerosequence_Value_d[0]';     
         
xcp.parameters(78).symbol = 'Wind_Turbine_P.valp_nom2_Value_a';
xcp.parameters(78).size   =  1;       
xcp.parameters(78).dtname = 'real_T'; 
xcp.parameters(79).baseaddr = '&Wind_Turbine_P.valp_nom2_Value_a';     
         
xcp.parameters(79).symbol = 'Wind_Turbine_P.Gain3_Gain_c';
xcp.parameters(79).size   =  1;       
xcp.parameters(79).dtname = 'real_T'; 
xcp.parameters(80).baseaddr = '&Wind_Turbine_P.Gain3_Gain_c';     
         
xcp.parameters(80).symbol = 'Wind_Turbine_P.Constant_Value_c';
xcp.parameters(80).size   =  1;       
xcp.parameters(80).dtname = 'real_T'; 
xcp.parameters(81).baseaddr = '&Wind_Turbine_P.Constant_Value_c';     
         
xcp.parameters(81).symbol = 'Wind_Turbine_P.Constant1_Value_n';
xcp.parameters(81).size   =  1;       
xcp.parameters(81).dtname = 'real_T'; 
xcp.parameters(82).baseaddr = '&Wind_Turbine_P.Constant1_Value_n';     
         
xcp.parameters(82).symbol = 'Wind_Turbine_P.Constant2_Value';
xcp.parameters(82).size   =  1;       
xcp.parameters(82).dtname = 'real_T'; 
xcp.parameters(83).baseaddr = '&Wind_Turbine_P.Constant2_Value';     
         
xcp.parameters(83).symbol = 'Wind_Turbine_P.Constant3_Value';
xcp.parameters(83).size   =  1;       
xcp.parameters(83).dtname = 'real_T'; 
xcp.parameters(84).baseaddr = '&Wind_Turbine_P.Constant3_Value';     
         
xcp.parameters(84).symbol = 'Wind_Turbine_P.Constant4_Value_f';
xcp.parameters(84).size   =  1;       
xcp.parameters(84).dtname = 'real_T'; 
xcp.parameters(85).baseaddr = '&Wind_Turbine_P.Constant4_Value_f';     
         
xcp.parameters(85).symbol = 'Wind_Turbine_P.Constant5_Value';
xcp.parameters(85).size   =  1;       
xcp.parameters(85).dtname = 'real_T'; 
xcp.parameters(86).baseaddr = '&Wind_Turbine_P.Constant5_Value';     
         
xcp.parameters(86).symbol = 'Wind_Turbine_P.Gain1_Gain';
xcp.parameters(86).size   =  1;       
xcp.parameters(86).dtname = 'real_T'; 
xcp.parameters(87).baseaddr = '&Wind_Turbine_P.Gain1_Gain';     
         
xcp.parameters(87).symbol = 'Wind_Turbine_P.Integrator_IC_g';
xcp.parameters(87).size   =  1;       
xcp.parameters(87).dtname = 'real_T'; 
xcp.parameters(88).baseaddr = '&Wind_Turbine_P.Integrator_IC_g';     
         
xcp.parameters(88).symbol = 'Wind_Turbine_P.Memory_InitialCondition';
xcp.parameters(88).size   =  1;       
xcp.parameters(88).dtname = 'real_T'; 
xcp.parameters(89).baseaddr = '&Wind_Turbine_P.Memory_InitialCondition';     
         
xcp.parameters(89).symbol = 'Wind_Turbine_P.Step_Y0_e';
xcp.parameters(89).size   =  1;       
xcp.parameters(89).dtname = 'real_T'; 
xcp.parameters(90).baseaddr = '&Wind_Turbine_P.Step_Y0_e';     
         
xcp.parameters(90).symbol = 'Wind_Turbine_P.Step_YFinal_g';
xcp.parameters(90).size   =  1;       
xcp.parameters(90).dtname = 'real_T'; 
xcp.parameters(91).baseaddr = '&Wind_Turbine_P.Step_YFinal_g';     
         
xcp.parameters(91).symbol = 'Wind_Turbine_P.Step1_Y0';
xcp.parameters(91).size   =  1;       
xcp.parameters(91).dtname = 'real_T'; 
xcp.parameters(92).baseaddr = '&Wind_Turbine_P.Step1_Y0';     
         
xcp.parameters(92).symbol = 'Wind_Turbine_P.Step1_YFinal';
xcp.parameters(92).size   =  1;       
xcp.parameters(92).dtname = 'real_T'; 
xcp.parameters(93).baseaddr = '&Wind_Turbine_P.Step1_YFinal';     
         
xcp.parameters(93).symbol = 'Wind_Turbine_P.Switch_Threshold_j';
xcp.parameters(93).size   =  1;       
xcp.parameters(93).dtname = 'real_T'; 
xcp.parameters(94).baseaddr = '&Wind_Turbine_P.Switch_Threshold_j';     
         
xcp.parameters(94).symbol = 'Wind_Turbine_P.Switch2_Threshold_d';
xcp.parameters(94).size   =  1;       
xcp.parameters(94).dtname = 'real_T'; 
xcp.parameters(95).baseaddr = '&Wind_Turbine_P.Switch2_Threshold_d';     
         
xcp.parameters(95).symbol = 'Wind_Turbine_P.donotdeletethisgain_Gain_f';
xcp.parameters(95).size   =  1;       
xcp.parameters(95).dtname = 'real_T'; 
xcp.parameters(96).baseaddr = '&Wind_Turbine_P.donotdeletethisgain_Gain_f';     
         
xcp.parameters(96).symbol = 'Wind_Turbine_P.donotdeletethisgain_Gain_n';
xcp.parameters(96).size   =  1;       
xcp.parameters(96).dtname = 'real_T'; 
xcp.parameters(97).baseaddr = '&Wind_Turbine_P.donotdeletethisgain_Gain_n';     
         
xcp.parameters(97).symbol = 'Wind_Turbine_P.donotdeletethisgain_Gain_b';
xcp.parameters(97).size   =  1;       
xcp.parameters(97).dtname = 'real_T'; 
xcp.parameters(98).baseaddr = '&Wind_Turbine_P.donotdeletethisgain_Gain_b';     
         
xcp.parameters(98).symbol = 'Wind_Turbine_P.Kv_Gain';
xcp.parameters(98).size   =  1;       
xcp.parameters(98).dtname = 'real_T'; 
xcp.parameters(99).baseaddr = '&Wind_Turbine_P.Kv_Gain';     
         
xcp.parameters(99).symbol = 'Wind_Turbine_P.Kv1_Gain';
xcp.parameters(99).size   =  1;       
xcp.parameters(99).dtname = 'real_T'; 
xcp.parameters(100).baseaddr = '&Wind_Turbine_P.Kv1_Gain';     
         
xcp.parameters(100).symbol = 'Wind_Turbine_P.C4_Value';
xcp.parameters(100).size   =  1;       
xcp.parameters(100).dtname = 'real_T'; 
xcp.parameters(101).baseaddr = '&Wind_Turbine_P.C4_Value';     
         
xcp.parameters(101).symbol = 'Wind_Turbine_P.Constant5_Value_d';
xcp.parameters(101).size   =  1;       
xcp.parameters(101).dtname = 'real_T'; 
xcp.parameters(102).baseaddr = '&Wind_Turbine_P.Constant5_Value_d';     
         
xcp.parameters(102).symbol = 'Wind_Turbine_P.Switch_Threshold';
xcp.parameters(102).size   =  1;       
xcp.parameters(102).dtname = 'real_T'; 
xcp.parameters(103).baseaddr = '&Wind_Turbine_P.Switch_Threshold';     
         
xcp.parameters(103).symbol = 'Wind_Turbine_P.Switch1_Threshold';
xcp.parameters(103).size   =  1;       
xcp.parameters(103).dtname = 'real_T'; 
xcp.parameters(104).baseaddr = '&Wind_Turbine_P.Switch1_Threshold';     
         
xcp.parameters(104).symbol = 'Wind_Turbine_P.Switch2_Threshold';
xcp.parameters(104).size   =  1;       
xcp.parameters(104).dtname = 'real_T'; 
xcp.parameters(105).baseaddr = '&Wind_Turbine_P.Switch2_Threshold';     
         
xcp.parameters(105).symbol = 'Wind_Turbine_P.Switch3_Threshold';
xcp.parameters(105).size   =  1;       
xcp.parameters(105).dtname = 'real_T'; 
xcp.parameters(106).baseaddr = '&Wind_Turbine_P.Switch3_Threshold';     
         
xcp.parameters(106).symbol = 'Wind_Turbine_P.C4_Value_i';
xcp.parameters(106).size   =  1;       
xcp.parameters(106).dtname = 'real_T'; 
xcp.parameters(107).baseaddr = '&Wind_Turbine_P.C4_Value_i';     
         
xcp.parameters(107).symbol = 'Wind_Turbine_P.Constant5_Value_db';
xcp.parameters(107).size   =  1;       
xcp.parameters(107).dtname = 'real_T'; 
xcp.parameters(108).baseaddr = '&Wind_Turbine_P.Constant5_Value_db';     
         
xcp.parameters(108).symbol = 'Wind_Turbine_P.Switch_Threshold_c';
xcp.parameters(108).size   =  1;       
xcp.parameters(108).dtname = 'real_T'; 
xcp.parameters(109).baseaddr = '&Wind_Turbine_P.Switch_Threshold_c';     
         
xcp.parameters(109).symbol = 'Wind_Turbine_P.Switch1_Threshold_b';
xcp.parameters(109).size   =  1;       
xcp.parameters(109).dtname = 'real_T'; 
xcp.parameters(110).baseaddr = '&Wind_Turbine_P.Switch1_Threshold_b';     
         
xcp.parameters(110).symbol = 'Wind_Turbine_P.Switch2_Threshold_m';
xcp.parameters(110).size   =  1;       
xcp.parameters(110).dtname = 'real_T'; 
xcp.parameters(111).baseaddr = '&Wind_Turbine_P.Switch2_Threshold_m';     
         
xcp.parameters(111).symbol = 'Wind_Turbine_P.Switch3_Threshold_f';
xcp.parameters(111).size   =  1;       
xcp.parameters(111).dtname = 'real_T'; 
xcp.parameters(112).baseaddr = '&Wind_Turbine_P.Switch3_Threshold_f';     
         
xcp.parameters(112).symbol = 'Wind_Turbine_P.Gain_Gain';
xcp.parameters(112).size   =  1;       
xcp.parameters(112).dtname = 'real_T'; 
xcp.parameters(113).baseaddr = '&Wind_Turbine_P.Gain_Gain';     
         
xcp.parameters(113).symbol = 'Wind_Turbine_P.Gain1_Gain_k';
xcp.parameters(113).size   =  1;       
xcp.parameters(113).dtname = 'real_T'; 
xcp.parameters(114).baseaddr = '&Wind_Turbine_P.Gain1_Gain_k';     
         
xcp.parameters(114).symbol = 'Wind_Turbine_P.Gain_Gain_j';
xcp.parameters(114).size   =  1;       
xcp.parameters(114).dtname = 'real_T'; 
xcp.parameters(115).baseaddr = '&Wind_Turbine_P.Gain_Gain_j';     
         
xcp.parameters(115).symbol = 'Wind_Turbine_P.Gain_Gain_n';
xcp.parameters(115).size   =  1;       
xcp.parameters(115).dtname = 'real_T'; 
xcp.parameters(116).baseaddr = '&Wind_Turbine_P.Gain_Gain_n';     
         
xcp.parameters(116).symbol = 'Wind_Turbine_P.Gain_Gain_c';
xcp.parameters(116).size   =  1;       
xcp.parameters(116).dtname = 'real_T'; 
xcp.parameters(117).baseaddr = '&Wind_Turbine_P.Gain_Gain_c';     
         
xcp.parameters(117).symbol = 'Wind_Turbine_P.ActuatorDynamics_x_initial_of';
xcp.parameters(117).size   =  1;       
xcp.parameters(117).dtname = 'real_T'; 
xcp.parameters(118).baseaddr = '&Wind_Turbine_P.ActuatorDynamics_x_initial_of';     
         
xcp.parameters(118).symbol = 'Wind_Turbine_P.LookupFix_Gain';
xcp.parameters(118).size   =  1;       
xcp.parameters(118).dtname = 'real_T'; 
xcp.parameters(119).baseaddr = '&Wind_Turbine_P.LookupFix_Gain';     
         
xcp.parameters(119).symbol = 'Wind_Turbine_P.AngletoExtension_XData';
xcp.parameters(119).size   =  88;       
xcp.parameters(119).dtname = 'real_T'; 
xcp.parameters(120).baseaddr = '&Wind_Turbine_P.AngletoExtension_XData[0]';     
         
xcp.parameters(120).symbol = 'Wind_Turbine_P.LimitPitchCommand_UpperSat';
xcp.parameters(120).size   =  1;       
xcp.parameters(120).dtname = 'real_T'; 
xcp.parameters(121).baseaddr = '&Wind_Turbine_P.LimitPitchCommand_UpperSat';     
         
xcp.parameters(121).symbol = 'Wind_Turbine_P.K_Gain';
xcp.parameters(121).size   =  1;       
xcp.parameters(121).dtname = 'real_T'; 
xcp.parameters(122).baseaddr = '&Wind_Turbine_P.K_Gain';     
         
xcp.parameters(122).symbol = 'Wind_Turbine_P.integrator_IC';
xcp.parameters(122).size   =  1;       
xcp.parameters(122).dtname = 'real_T'; 
xcp.parameters(123).baseaddr = '&Wind_Turbine_P.integrator_IC';     
         
xcp.parameters(123).symbol = 'Wind_Turbine_P.Step_Y0';
xcp.parameters(123).size   =  1;       
xcp.parameters(123).dtname = 'real_T'; 
xcp.parameters(124).baseaddr = '&Wind_Turbine_P.Step_Y0';     
         
xcp.parameters(124).symbol = 'Wind_Turbine_P.Step_YFinal';
xcp.parameters(124).size   =  1;       
xcp.parameters(124).dtname = 'real_T'; 
xcp.parameters(125).baseaddr = '&Wind_Turbine_P.Step_YFinal';     
         
xcp.parameters(125).symbol = 'Wind_Turbine_P.Switch_Threshold_k';
xcp.parameters(125).size   =  1;       
xcp.parameters(125).dtname = 'real_T'; 
xcp.parameters(126).baseaddr = '&Wind_Turbine_P.Switch_Threshold_k';     
         
xcp.parameters(126).symbol = 'Wind_Turbine_P.TransportDelay_InitOutput';
xcp.parameters(126).size   =  1;       
xcp.parameters(126).dtname = 'real_T'; 
xcp.parameters(127).baseaddr = '&Wind_Turbine_P.TransportDelay_InitOutput';     
         
xcp.parameters(127).symbol = 'Wind_Turbine_P.integrator_IC_j';
xcp.parameters(127).size   =  1;       
xcp.parameters(127).dtname = 'real_T'; 
xcp.parameters(128).baseaddr = '&Wind_Turbine_P.integrator_IC_j';     
         
xcp.parameters(128).symbol = 'Wind_Turbine_P.Step_Y0_g';
xcp.parameters(128).size   =  1;       
xcp.parameters(128).dtname = 'real_T'; 
xcp.parameters(129).baseaddr = '&Wind_Turbine_P.Step_Y0_g';     
         
xcp.parameters(129).symbol = 'Wind_Turbine_P.Step_YFinal_h';
xcp.parameters(129).size   =  1;       
xcp.parameters(129).dtname = 'real_T'; 
xcp.parameters(130).baseaddr = '&Wind_Turbine_P.Step_YFinal_h';     
         
xcp.parameters(130).symbol = 'Wind_Turbine_P.Switch_Threshold_f';
xcp.parameters(130).size   =  1;       
xcp.parameters(130).dtname = 'real_T'; 
xcp.parameters(131).baseaddr = '&Wind_Turbine_P.Switch_Threshold_f';     
         
xcp.parameters(131).symbol = 'Wind_Turbine_P.TransportDelay_InitOutput_e';
xcp.parameters(131).size   =  1;       
xcp.parameters(131).dtname = 'real_T'; 
xcp.parameters(132).baseaddr = '&Wind_Turbine_P.TransportDelay_InitOutput_e';     
         
xcp.parameters(132).symbol = 'Wind_Turbine_P.HitCrossing_Offset';
xcp.parameters(132).size   =  1;       
xcp.parameters(132).dtname = 'real_T'; 
xcp.parameters(133).baseaddr = '&Wind_Turbine_P.HitCrossing_Offset';     
         
xcp.parameters(133).symbol = 'Wind_Turbine_P.LookUpTable_XData';
xcp.parameters(133).size   =  6;       
xcp.parameters(133).dtname = 'real_T'; 
xcp.parameters(134).baseaddr = '&Wind_Turbine_P.LookUpTable_XData[0]';     
         
xcp.parameters(134).symbol = 'Wind_Turbine_P.LookUpTable_YData';
xcp.parameters(134).size   =  6;       
xcp.parameters(134).dtname = 'real_T'; 
xcp.parameters(135).baseaddr = '&Wind_Turbine_P.LookUpTable_YData[0]';     
         
xcp.parameters(135).symbol = 'Wind_Turbine_P.Saturation_UpperSat';
xcp.parameters(135).size   =  1;       
xcp.parameters(135).dtname = 'real_T'; 
xcp.parameters(136).baseaddr = '&Wind_Turbine_P.Saturation_UpperSat';     
         
xcp.parameters(136).symbol = 'Wind_Turbine_P.Saturation_LowerSat_m';
xcp.parameters(136).size   =  1;       
xcp.parameters(136).dtname = 'real_T'; 
xcp.parameters(137).baseaddr = '&Wind_Turbine_P.Saturation_LowerSat_m';     
         
xcp.parameters(137).symbol = 'Wind_Turbine_P.Vqdr1_Value';
xcp.parameters(137).size   =  2;       
xcp.parameters(137).dtname = 'real_T'; 
xcp.parameters(138).baseaddr = '&Wind_Turbine_P.Vqdr1_Value[0]';     
         
xcp.parameters(138).symbol = 'Wind_Turbine_P.Vqdr3_Value';
xcp.parameters(138).size   =  2;       
xcp.parameters(138).dtname = 'real_T'; 
xcp.parameters(139).baseaddr = '&Wind_Turbine_P.Vqdr3_Value[0]';     
         
xcp.parameters(139).symbol = 'Wind_Turbine_P.ws2_Value';
xcp.parameters(139).size   =  1;       
xcp.parameters(139).dtname = 'real_T'; 
xcp.parameters(140).baseaddr = '&Wind_Turbine_P.ws2_Value';     
         
xcp.parameters(140).symbol = 'Wind_Turbine_P.u_Vb_Gain';
xcp.parameters(140).size   =  1;       
xcp.parameters(140).dtname = 'real_T'; 
xcp.parameters(141).baseaddr = '&Wind_Turbine_P.u_Vb_Gain';     
         
xcp.parameters(141).symbol = 'Wind_Turbine_P.Gain_Gain_d';
xcp.parameters(141).size   =  19;       
xcp.parameters(141).dtname = 'real_T'; 
xcp.parameters(142).baseaddr = '&Wind_Turbine_P.Gain_Gain_d[0]';     
         
xcp.parameters(142).symbol = 'Wind_Turbine_P.ib_Gain';
xcp.parameters(142).size   =  1;       
xcp.parameters(142).dtname = 'real_T'; 
xcp.parameters(143).baseaddr = '&Wind_Turbine_P.ib_Gain';     
         
xcp.parameters(143).symbol = 'Wind_Turbine_P.up_Gain';
xcp.parameters(143).size   =  1;       
xcp.parameters(143).dtname = 'real_T'; 
xcp.parameters(144).baseaddr = '&Wind_Turbine_P.up_Gain';     
         
xcp.parameters(144).symbol = 'Wind_Turbine_P.Gain_Gain_k';
xcp.parameters(144).size   =  3;       
xcp.parameters(144).dtname = 'real_T'; 
xcp.parameters(145).baseaddr = '&Wind_Turbine_P.Gain_Gain_k[0]';     
         
xcp.parameters(145).symbol = 'Wind_Turbine_P.web_psb_Gain';
xcp.parameters(145).size   =  1;       
xcp.parameters(145).dtname = 'real_T'; 
xcp.parameters(146).baseaddr = '&Wind_Turbine_P.web_psb_Gain';     
         
xcp.parameters(146).symbol = 'Wind_Turbine_P.web_psb1_Gain';
xcp.parameters(146).size   =  1;       
xcp.parameters(146).dtname = 'real_T'; 
xcp.parameters(147).baseaddr = '&Wind_Turbine_P.web_psb1_Gain';     
         
xcp.parameters(147).symbol = 'Wind_Turbine_P.Rotoranglethetam_IC';
xcp.parameters(147).size   =  1;       
xcp.parameters(147).dtname = 'real_T'; 
xcp.parameters(148).baseaddr = '&Wind_Turbine_P.Rotoranglethetam_IC';     
         
xcp.parameters(148).symbol = 'Wind_Turbine_P.Integrator_IC_p';
xcp.parameters(148).size   =  1;       
xcp.parameters(148).dtname = 'real_T'; 
xcp.parameters(149).baseaddr = '&Wind_Turbine_P.Integrator_IC_p';     
         
xcp.parameters(149).symbol = 'Wind_Turbine_P.rad2deg_Gain';
xcp.parameters(149).size   =  1;       
xcp.parameters(149).dtname = 'real_T'; 
xcp.parameters(150).baseaddr = '&Wind_Turbine_P.rad2deg_Gain';     
         
xcp.parameters(150).symbol = 'Wind_Turbine_P.Saturation_LowerSat';
xcp.parameters(150).size   =  1;       
xcp.parameters(150).dtname = 'real_T'; 
xcp.parameters(151).baseaddr = '&Wind_Turbine_P.Saturation_LowerSat';     
         
xcp.parameters(151).symbol = 'Wind_Turbine_P.u3_Value';
xcp.parameters(151).size   =  16;       
xcp.parameters(151).dtname = 'real_T'; 
xcp.parameters(152).baseaddr = '&Wind_Turbine_P.u3_Value[0]';     
         
xcp.parameters(152).symbol = 'Wind_Turbine_P.we_Value';
xcp.parameters(152).size   =  1;       
xcp.parameters(152).dtname = 'real_T'; 
xcp.parameters(153).baseaddr = '&Wind_Turbine_P.we_Value';     
         
xcp.parameters(153).symbol = 'Wind_Turbine_P.Gain2_Gain';
xcp.parameters(153).size   =  1;       
xcp.parameters(153).dtname = 'real_T'; 
xcp.parameters(154).baseaddr = '&Wind_Turbine_P.Gain2_Gain';     
         
xcp.parameters(154).symbol = 'Wind_Turbine_P.a23_Gain';
xcp.parameters(154).size   =  1;       
xcp.parameters(154).dtname = 'real_T'; 
xcp.parameters(155).baseaddr = '&Wind_Turbine_P.a23_Gain.re';     
         
xcp.parameters(155).symbol = 'Wind_Turbine_P.Gain_Gain_h';
xcp.parameters(155).size   =  1;       
xcp.parameters(155).dtname = 'real_T'; 
xcp.parameters(156).baseaddr = '&Wind_Turbine_P.Gain_Gain_h';     
         
xcp.parameters(156).symbol = 'Wind_Turbine_P.Gain1_Gain_l';
xcp.parameters(156).size   =  1;       
xcp.parameters(156).dtname = 'real_T'; 
xcp.parameters(157).baseaddr = '&Wind_Turbine_P.Gain1_Gain_l';     
         
xcp.parameters(157).symbol = 'Wind_Turbine_P.a3_Gain';
xcp.parameters(157).size   =  1;       
xcp.parameters(157).dtname = 'real_T'; 
xcp.parameters(158).baseaddr = '&Wind_Turbine_P.a3_Gain.re';     
         
xcp.parameters(158).symbol = 'Wind_Turbine_P.Constant_Value';
xcp.parameters(158).size   =  1;       
xcp.parameters(158).dtname = 'real_T'; 
xcp.parameters(159).baseaddr = '&Wind_Turbine_P.Constant_Value';     
         
xcp.parameters(159).symbol = 'Wind_Turbine_P.Constant1_Value_h';
xcp.parameters(159).size   =  1;       
xcp.parameters(159).dtname = 'real_T'; 
xcp.parameters(160).baseaddr = '&Wind_Turbine_P.Constant1_Value_h';     
         
xcp.parameters(160).symbol = 'Wind_Turbine_P.Constant2_Value_j';
xcp.parameters(160).size   =  16;       
xcp.parameters(160).dtname = 'real_T'; 
xcp.parameters(161).baseaddr = '&Wind_Turbine_P.Constant2_Value_j[0]';     
         
xcp.parameters(161).symbol = 'Wind_Turbine_P.Constant3_Value_b';
xcp.parameters(161).size   =  1;       
xcp.parameters(161).dtname = 'real_T'; 
xcp.parameters(162).baseaddr = '&Wind_Turbine_P.Constant3_Value_b';     
         
xcp.parameters(162).symbol = 'Wind_Turbine_P.Constant4_Value_b';
xcp.parameters(162).size   =  16;       
xcp.parameters(162).dtname = 'real_T'; 
xcp.parameters(163).baseaddr = '&Wind_Turbine_P.Constant4_Value_b[0]';     
         
xcp.parameters(163).symbol = 'Wind_Turbine_P.Constant5_Value_a';
xcp.parameters(163).size   =  1;       
xcp.parameters(163).dtname = 'real_T'; 
xcp.parameters(164).baseaddr = '&Wind_Turbine_P.Constant5_Value_a';     
         
xcp.parameters(164).symbol = 'Wind_Turbine_P.Lm_nosat_Value';
xcp.parameters(164).size   =  1;       
xcp.parameters(164).dtname = 'real_T'; 
xcp.parameters(165).baseaddr = '&Wind_Turbine_P.Lm_nosat_Value';     
         
xcp.parameters(165).symbol = 'Wind_Turbine_P.Switch_Threshold_o';
xcp.parameters(165).size   =  1;       
xcp.parameters(165).dtname = 'real_T'; 
xcp.parameters(166).baseaddr = '&Wind_Turbine_P.Switch_Threshold_o';     
         
xcp.parameters(166).symbol = 'Wind_Turbine_P.Switch1_Threshold_i';
xcp.parameters(166).size   =  1;       
xcp.parameters(166).dtname = 'real_T'; 
xcp.parameters(167).baseaddr = '&Wind_Turbine_P.Switch1_Threshold_i';     
         
xcp.parameters(167).symbol = 'Wind_Turbine_P.Switch2_Threshold_h';
xcp.parameters(167).size   =  1;       
xcp.parameters(167).dtname = 'real_T'; 
xcp.parameters(168).baseaddr = '&Wind_Turbine_P.Switch2_Threshold_h';     
         
xcp.parameters(168).symbol = 'Wind_Turbine_P.pi2phaseshift_Gain';
xcp.parameters(168).size   =  1;       
xcp.parameters(168).dtname = 'real_T'; 
xcp.parameters(169).baseaddr = '&Wind_Turbine_P.pi2phaseshift_Gain.re';     
         
xcp.parameters(169).symbol = 'Wind_Turbine_P.Gain1_Gain_h';
xcp.parameters(169).size   =  1;       
xcp.parameters(169).dtname = 'real_T'; 
xcp.parameters(170).baseaddr = '&Wind_Turbine_P.Gain1_Gain_h';     
         
xcp.parameters(170).symbol = 'Wind_Turbine_P.Gain2_Gain_i';
xcp.parameters(170).size   =  1;       
xcp.parameters(170).dtname = 'real_T'; 
xcp.parameters(171).baseaddr = '&Wind_Turbine_P.Gain2_Gain_i';     
         
xcp.parameters(171).symbol = 'Wind_Turbine_P.Gain3_Gain_j';
xcp.parameters(171).size   =  2;       
xcp.parameters(171).dtname = 'real_T'; 
xcp.parameters(172).baseaddr = '&Wind_Turbine_P.Gain3_Gain_j[0]';     
         
xcp.parameters(172).symbol = 'Wind_Turbine_P.Gain4_Gain_k';
xcp.parameters(172).size   =  1;       
xcp.parameters(172).dtname = 'real_T'; 
xcp.parameters(173).baseaddr = '&Wind_Turbine_P.Gain4_Gain_k';     
         
xcp.parameters(173).symbol = 'Wind_Turbine_P.Integrator_IC_a';
xcp.parameters(173).size   =  2;       
xcp.parameters(173).dtname = 'real_T'; 
xcp.parameters(174).baseaddr = '&Wind_Turbine_P.Integrator_IC_a[0]';     
         
xcp.parameters(174).symbol = 'Wind_Turbine_P.donotdeletethisgain_Gain_c';
xcp.parameters(174).size   =  1;       
xcp.parameters(174).dtname = 'real_T'; 
xcp.parameters(175).baseaddr = '&Wind_Turbine_P.donotdeletethisgain_Gain_c';     
         
xcp.parameters(175).symbol = 'Wind_Turbine_P.donotdeletethisgain_Gain_j';
xcp.parameters(175).size   =  1;       
xcp.parameters(175).dtname = 'real_T'; 
xcp.parameters(176).baseaddr = '&Wind_Turbine_P.donotdeletethisgain_Gain_j';     
         
xcp.parameters(176).symbol = 'Wind_Turbine_P.donotdeletethisgain_Gain_a';
xcp.parameters(176).size   =  1;       
xcp.parameters(176).dtname = 'real_T'; 
xcp.parameters(177).baseaddr = '&Wind_Turbine_P.donotdeletethisgain_Gain_a';     
         
xcp.parameters(177).symbol = 'Wind_Turbine_P.donotdeletethisgain_Gain';
xcp.parameters(177).size   =  1;       
xcp.parameters(177).dtname = 'real_T'; 
xcp.parameters(178).baseaddr = '&Wind_Turbine_P.donotdeletethisgain_Gain';     
         
xcp.parameters(178).symbol = 'Wind_Turbine_P.donotdeletethisgain_Gain_o';
xcp.parameters(178).size   =  1;       
xcp.parameters(178).dtname = 'real_T'; 
xcp.parameters(179).baseaddr = '&Wind_Turbine_P.donotdeletethisgain_Gain_o';     
         
xcp.parameters(179).symbol = 'Wind_Turbine_P.donotdeletethisgain_Gain_l';
xcp.parameters(179).size   =  1;       
xcp.parameters(179).dtname = 'real_T'; 
xcp.parameters(180).baseaddr = '&Wind_Turbine_P.donotdeletethisgain_Gain_l';     
         
xcp.parameters(180).symbol = 'Wind_Turbine_P.C4_Value_g';
xcp.parameters(180).size   =  1;       
xcp.parameters(180).dtname = 'real_T'; 
xcp.parameters(181).baseaddr = '&Wind_Turbine_P.C4_Value_g';     
         
xcp.parameters(181).symbol = 'Wind_Turbine_P.Switch3_Threshold_n';
xcp.parameters(181).size   =  1;       
xcp.parameters(181).dtname = 'real_T'; 
xcp.parameters(182).baseaddr = '&Wind_Turbine_P.Switch3_Threshold_n';     
         
xcp.parameters(182).symbol = 'Wind_Turbine_P.C4_Value_m';
xcp.parameters(182).size   =  1;       
xcp.parameters(182).dtname = 'real_T'; 
xcp.parameters(183).baseaddr = '&Wind_Turbine_P.C4_Value_m';     
         
xcp.parameters(183).symbol = 'Wind_Turbine_P.Switch3_Threshold_i';
xcp.parameters(183).size   =  1;       
xcp.parameters(183).dtname = 'real_T'; 
xcp.parameters(184).baseaddr = '&Wind_Turbine_P.Switch3_Threshold_i';     
         
xcp.parameters(184).symbol = 'Wind_Turbine_P.C4_Value_o';
xcp.parameters(184).size   =  1;       
xcp.parameters(184).dtname = 'real_T'; 
xcp.parameters(185).baseaddr = '&Wind_Turbine_P.C4_Value_o';     
         
xcp.parameters(185).symbol = 'Wind_Turbine_P.Switch3_Threshold_o';
xcp.parameters(185).size   =  1;       
xcp.parameters(185).dtname = 'real_T'; 
xcp.parameters(186).baseaddr = '&Wind_Turbine_P.Switch3_Threshold_o';     
         
xcp.parameters(186).symbol = 'Wind_Turbine_P.HitCrossing_Offset_h';
xcp.parameters(186).size   =  1;       
xcp.parameters(186).dtname = 'real_T'; 
xcp.parameters(187).baseaddr = '&Wind_Turbine_P.HitCrossing_Offset_h';     
         
xcp.parameters(187).symbol = 'Wind_Turbine_P.LookUpTable_XData_p';
xcp.parameters(187).size   =  4;       
xcp.parameters(187).dtname = 'real_T'; 
xcp.parameters(188).baseaddr = '&Wind_Turbine_P.LookUpTable_XData_p[0]';     
         
xcp.parameters(188).symbol = 'Wind_Turbine_P.LookUpTable_YData_l';
xcp.parameters(188).size   =  4;       
xcp.parameters(188).dtname = 'real_T'; 
xcp.parameters(189).baseaddr = '&Wind_Turbine_P.LookUpTable_YData_l[0]';     
         
xcp.parameters(189).symbol = 'Wind_Turbine_P.C4_Value_d';
xcp.parameters(189).size   =  1;       
xcp.parameters(189).dtname = 'real_T'; 
xcp.parameters(190).baseaddr = '&Wind_Turbine_P.C4_Value_d';     
         
xcp.parameters(190).symbol = 'Wind_Turbine_P.Switch3_Threshold_it';
xcp.parameters(190).size   =  1;       
xcp.parameters(190).dtname = 'real_T'; 
xcp.parameters(191).baseaddr = '&Wind_Turbine_P.Switch3_Threshold_it';     
         
xcp.parameters(191).symbol = 'Wind_Turbine_P.C4_Value_ok';
xcp.parameters(191).size   =  1;       
xcp.parameters(191).dtname = 'real_T'; 
xcp.parameters(192).baseaddr = '&Wind_Turbine_P.C4_Value_ok';     
         
xcp.parameters(192).symbol = 'Wind_Turbine_P.Switch3_Threshold_h';
xcp.parameters(192).size   =  1;       
xcp.parameters(192).dtname = 'real_T'; 
xcp.parameters(193).baseaddr = '&Wind_Turbine_P.Switch3_Threshold_h';     
         
xcp.parameters(193).symbol = 'Wind_Turbine_P.C4_Value_k';
xcp.parameters(193).size   =  1;       
xcp.parameters(193).dtname = 'real_T'; 
xcp.parameters(194).baseaddr = '&Wind_Turbine_P.C4_Value_k';     
         
xcp.parameters(194).symbol = 'Wind_Turbine_P.Switch3_Threshold_hg';
xcp.parameters(194).size   =  1;       
xcp.parameters(194).dtname = 'real_T'; 
xcp.parameters(195).baseaddr = '&Wind_Turbine_P.Switch3_Threshold_hg';     
         
xcp.parameters(195).symbol = 'Wind_Turbine_P.HitCrossing_Offset_b';
xcp.parameters(195).size   =  1;       
xcp.parameters(195).dtname = 'real_T'; 
xcp.parameters(196).baseaddr = '&Wind_Turbine_P.HitCrossing_Offset_b';     
         
xcp.parameters(196).symbol = 'Wind_Turbine_P.LookUpTable_XData_k1';
xcp.parameters(196).size   =  4;       
xcp.parameters(196).dtname = 'real_T'; 
xcp.parameters(197).baseaddr = '&Wind_Turbine_P.LookUpTable_XData_k1[0]';     
         
xcp.parameters(197).symbol = 'Wind_Turbine_P.LookUpTable_YData_ab';
xcp.parameters(197).size   =  4;       
xcp.parameters(197).dtname = 'real_T'; 
xcp.parameters(198).baseaddr = '&Wind_Turbine_P.LookUpTable_YData_ab[0]';     
         
xcp.parameters(198).symbol = 'Wind_Turbine_P.GAIN_Gain_n';
xcp.parameters(198).size   =  1;       
xcp.parameters(198).dtname = 'real_T'; 
xcp.parameters(199).baseaddr = '&Wind_Turbine_P.GAIN_Gain_n';     
         
xcp.parameters(199).symbol = 'Wind_Turbine_P.ActuatorDynamics_x_initial';
xcp.parameters(199).size   =  1;       
xcp.parameters(199).dtname = 'real_T'; 
xcp.parameters(200).baseaddr = '&Wind_Turbine_P.ActuatorDynamics_x_initial';     
         
xcp.parameters(200).symbol = 'Wind_Turbine_P.EmergenyBrakePitchCloseValve_Va';
xcp.parameters(200).size   =  1;       
xcp.parameters(200).dtname = 'real_T'; 
xcp.parameters(201).baseaddr = '&Wind_Turbine_P.EmergenyBrakePitchCloseValve_Va';     
         
xcp.parameters(201).symbol = 'Wind_Turbine_P.Switch_Threshold_d';
xcp.parameters(201).size   =  1;       
xcp.parameters(201).dtname = 'real_T'; 
xcp.parameters(202).baseaddr = '&Wind_Turbine_P.Switch_Threshold_d';     
         
xcp.parameters(202).symbol = 'Wind_Turbine_P.ActuatorDynamics_x_initial_o';
xcp.parameters(202).size   =  1;       
xcp.parameters(202).dtname = 'real_T'; 
xcp.parameters(203).baseaddr = '&Wind_Turbine_P.ActuatorDynamics_x_initial_o';     
         
xcp.parameters(203).symbol = 'Wind_Turbine_P.EmergenyBrakePitchCloseValve__h';
xcp.parameters(203).size   =  1;       
xcp.parameters(203).dtname = 'real_T'; 
xcp.parameters(204).baseaddr = '&Wind_Turbine_P.EmergenyBrakePitchCloseValve__h';     
         
xcp.parameters(204).symbol = 'Wind_Turbine_P.Switch_Threshold_cr';
xcp.parameters(204).size   =  1;       
xcp.parameters(204).dtname = 'real_T'; 
xcp.parameters(205).baseaddr = '&Wind_Turbine_P.Switch_Threshold_cr';     
         
xcp.parameters(205).symbol = 'Wind_Turbine_P.ActuatorDynamics_x_initial_b';
xcp.parameters(205).size   =  1;       
xcp.parameters(205).dtname = 'real_T'; 
xcp.parameters(206).baseaddr = '&Wind_Turbine_P.ActuatorDynamics_x_initial_b';     
         
xcp.parameters(206).symbol = 'Wind_Turbine_P.EmergenyBrakePitchCloseValve__f';
xcp.parameters(206).size   =  1;       
xcp.parameters(206).dtname = 'real_T'; 
xcp.parameters(207).baseaddr = '&Wind_Turbine_P.EmergenyBrakePitchCloseValve__f';     
         
xcp.parameters(207).symbol = 'Wind_Turbine_P.Switch_Threshold_k0';
xcp.parameters(207).size   =  1;       
xcp.parameters(207).dtname = 'real_T'; 
xcp.parameters(208).baseaddr = '&Wind_Turbine_P.Switch_Threshold_k0';     
         
xcp.parameters(208).symbol = 'Wind_Turbine_P.Integrator_IC_d';
xcp.parameters(208).size   =  1;       
xcp.parameters(208).dtname = 'real_T'; 
xcp.parameters(209).baseaddr = '&Wind_Turbine_P.Integrator_IC_d';     
         
xcp.parameters(209).symbol = 'Wind_Turbine_P.a_Gain_o';
xcp.parameters(209).size   =  1;       
xcp.parameters(209).dtname = 'real_T'; 
xcp.parameters(210).baseaddr = '&Wind_Turbine_P.a_Gain_o.re';     
         
xcp.parameters(210).symbol = 'Wind_Turbine_P.a2_Gain_j';
xcp.parameters(210).size   =  1;       
xcp.parameters(210).dtname = 'real_T'; 
xcp.parameters(211).baseaddr = '&Wind_Turbine_P.a2_Gain_j.re';     
         
xcp.parameters(211).symbol = 'Wind_Turbine_P.inv_Gain';
xcp.parameters(211).size   =  1;       
xcp.parameters(211).dtname = 'real_T'; 
xcp.parameters(212).baseaddr = '&Wind_Turbine_P.inv_Gain';     
         
xcp.parameters(212).symbol = 'Wind_Turbine_P.a_Gain';
xcp.parameters(212).size   =  1;       
xcp.parameters(212).dtname = 'real_T'; 
xcp.parameters(213).baseaddr = '&Wind_Turbine_P.a_Gain.re';     
         
xcp.parameters(213).symbol = 'Wind_Turbine_P.a2_Gain';
xcp.parameters(213).size   =  1;       
xcp.parameters(213).dtname = 'real_T'; 
xcp.parameters(214).baseaddr = '&Wind_Turbine_P.a2_Gain.re';     
         
xcp.parameters(214).symbol = 'Wind_Turbine_P.inv_Gain_h';
xcp.parameters(214).size   =  1;       
xcp.parameters(214).dtname = 'real_T'; 
xcp.parameters(215).baseaddr = '&Wind_Turbine_P.inv_Gain_h';     
         
xcp.parameters(215).symbol = 'Wind_Turbine_P.u1_Gain';
xcp.parameters(215).size   =  2;       
xcp.parameters(215).dtname = 'real_T'; 
xcp.parameters(216).baseaddr = '&Wind_Turbine_P.u1_Gain[0]';     
         
xcp.parameters(216).symbol = 'Wind_Turbine_P.Constant1_Value';
xcp.parameters(216).size   =  1;       
xcp.parameters(216).dtname = 'real_T'; 
xcp.parameters(217).baseaddr = '&Wind_Turbine_P.Constant1_Value';     
         
xcp.parameters(217).symbol = 'Wind_Turbine_P.u1_Value_i';
xcp.parameters(217).size   =  16;       
xcp.parameters(217).dtname = 'real_T'; 
xcp.parameters(218).baseaddr = '&Wind_Turbine_P.u1_Value_i[0]';     
         
xcp.parameters(218).symbol = 'Wind_Turbine_P.uDLookupTable_tableData';
xcp.parameters(218).size   =  2;       
xcp.parameters(218).dtname = 'real_T'; 
xcp.parameters(219).baseaddr = '&Wind_Turbine_P.uDLookupTable_tableData[0]';     
         
xcp.parameters(219).symbol = 'Wind_Turbine_P.uDLookupTable_bp01Data';
xcp.parameters(219).size   =  2;       
xcp.parameters(219).dtname = 'real_T'; 
xcp.parameters(220).baseaddr = '&Wind_Turbine_P.uDLookupTable_bp01Data[0]';     
         
xcp.parameters(220).symbol = 'Wind_Turbine_P.wbase_Gain';
xcp.parameters(220).size   =  1;       
xcp.parameters(220).dtname = 'real_T'; 
xcp.parameters(221).baseaddr = '&Wind_Turbine_P.wbase_Gain';     
         
xcp.parameters(221).symbol = 'Wind_Turbine_P.Integrator_IC_j';
xcp.parameters(221).size   =  4;       
xcp.parameters(221).dtname = 'real_T'; 
xcp.parameters(222).baseaddr = '&Wind_Turbine_P.Integrator_IC_j[0]';     
         
xcp.parameters(222).symbol = 'Wind_Turbine_P.Constant4_Value_j';
xcp.parameters(222).size   =  1;       
xcp.parameters(222).dtname = 'real_T'; 
xcp.parameters(223).baseaddr = '&Wind_Turbine_P.Constant4_Value_j.re';     
         
xcp.parameters(223).symbol = 'Wind_Turbine_P.Constant5_Value_j';
xcp.parameters(223).size   =  1;       
xcp.parameters(223).dtname = 'real_T'; 
xcp.parameters(224).baseaddr = '&Wind_Turbine_P.Constant5_Value_j.re';     
         
xcp.parameters(224).symbol = 'Wind_Turbine_P.HitCrossing_Offset_c';
xcp.parameters(224).size   =  1;       
xcp.parameters(224).dtname = 'real_T'; 
xcp.parameters(225).baseaddr = '&Wind_Turbine_P.HitCrossing_Offset_c';     
         
xcp.parameters(225).symbol = 'Wind_Turbine_P.LookUpTable_XData_l';
xcp.parameters(225).size   =  5;       
xcp.parameters(225).dtname = 'real_T'; 
xcp.parameters(226).baseaddr = '&Wind_Turbine_P.LookUpTable_XData_l[0]';     
         
xcp.parameters(226).symbol = 'Wind_Turbine_P.LookUpTable_YData_a';
xcp.parameters(226).size   =  5;       
xcp.parameters(226).dtname = 'real_T'; 
xcp.parameters(227).baseaddr = '&Wind_Turbine_P.LookUpTable_YData_a[0]';     
         
xcp.parameters(227).symbol = 'Wind_Turbine_P.HitCrossing_Offset_d';
xcp.parameters(227).size   =  1;       
xcp.parameters(227).dtname = 'real_T'; 
xcp.parameters(228).baseaddr = '&Wind_Turbine_P.HitCrossing_Offset_d';     
         
xcp.parameters(228).symbol = 'Wind_Turbine_P.LookUpTable_XData_k';
xcp.parameters(228).size   =  5;       
xcp.parameters(228).dtname = 'real_T'; 
xcp.parameters(229).baseaddr = '&Wind_Turbine_P.LookUpTable_XData_k[0]';     
         
xcp.parameters(229).symbol = 'Wind_Turbine_P.LookUpTable_YData_n';
xcp.parameters(229).size   =  5;       
xcp.parameters(229).dtname = 'real_T'; 
xcp.parameters(230).baseaddr = '&Wind_Turbine_P.LookUpTable_YData_n[0]';     
         
xcp.parameters(230).symbol = 'Wind_Turbine_P.HitCrossing_Offset_l';
xcp.parameters(230).size   =  1;       
xcp.parameters(230).dtname = 'real_T'; 
xcp.parameters(231).baseaddr = '&Wind_Turbine_P.HitCrossing_Offset_l';     
         
xcp.parameters(231).symbol = 'Wind_Turbine_P.LookUpTable_XData_g';
xcp.parameters(231).size   =  5;       
xcp.parameters(231).dtname = 'real_T'; 
xcp.parameters(232).baseaddr = '&Wind_Turbine_P.LookUpTable_XData_g[0]';     
         
xcp.parameters(232).symbol = 'Wind_Turbine_P.LookUpTable_YData_m';
xcp.parameters(232).size   =  5;       
xcp.parameters(232).dtname = 'real_T'; 
xcp.parameters(233).baseaddr = '&Wind_Turbine_P.LookUpTable_YData_m[0]';     
         
xcp.parameters(233).symbol = 'Wind_Turbine_P.HitCrossing_Offset_a';
xcp.parameters(233).size   =  1;       
xcp.parameters(233).dtname = 'real_T'; 
xcp.parameters(234).baseaddr = '&Wind_Turbine_P.HitCrossing_Offset_a';     
         
xcp.parameters(234).symbol = 'Wind_Turbine_P.LookUpTable_XData_pn';
xcp.parameters(234).size   =  5;       
xcp.parameters(234).dtname = 'real_T'; 
xcp.parameters(235).baseaddr = '&Wind_Turbine_P.LookUpTable_XData_pn[0]';     
         
xcp.parameters(235).symbol = 'Wind_Turbine_P.LookUpTable_YData_mp';
xcp.parameters(235).size   =  5;       
xcp.parameters(235).dtname = 'real_T'; 
xcp.parameters(236).baseaddr = '&Wind_Turbine_P.LookUpTable_YData_mp[0]';     
         
xcp.parameters(236).symbol = 'Wind_Turbine_P.HitCrossing_Offset_cd';
xcp.parameters(236).size   =  1;       
xcp.parameters(236).dtname = 'real_T'; 
xcp.parameters(237).baseaddr = '&Wind_Turbine_P.HitCrossing_Offset_cd';     
         
xcp.parameters(237).symbol = 'Wind_Turbine_P.LookUpTable_XData_le';
xcp.parameters(237).size   =  5;       
xcp.parameters(237).dtname = 'real_T'; 
xcp.parameters(238).baseaddr = '&Wind_Turbine_P.LookUpTable_XData_le[0]';     
         
xcp.parameters(238).symbol = 'Wind_Turbine_P.LookUpTable_YData_e';
xcp.parameters(238).size   =  5;       
xcp.parameters(238).dtname = 'real_T'; 
xcp.parameters(239).baseaddr = '&Wind_Turbine_P.LookUpTable_YData_e[0]';     
         
xcp.parameters(239).symbol = 'Wind_Turbine_P.HitCrossing_Offset_m';
xcp.parameters(239).size   =  1;       
xcp.parameters(239).dtname = 'real_T'; 
xcp.parameters(240).baseaddr = '&Wind_Turbine_P.HitCrossing_Offset_m';     
         
xcp.parameters(240).symbol = 'Wind_Turbine_P.LookUpTable_XData_h';
xcp.parameters(240).size   =  5;       
xcp.parameters(240).dtname = 'real_T'; 
xcp.parameters(241).baseaddr = '&Wind_Turbine_P.LookUpTable_XData_h[0]';     
         
xcp.parameters(241).symbol = 'Wind_Turbine_P.LookUpTable_YData_d';
xcp.parameters(241).size   =  5;       
xcp.parameters(241).dtname = 'real_T'; 
xcp.parameters(242).baseaddr = '&Wind_Turbine_P.LookUpTable_YData_d[0]';     
         
xcp.parameters(242).symbol = 'Wind_Turbine_P.GAIN_Gain';
xcp.parameters(242).size   =  1;       
xcp.parameters(242).dtname = 'real_T'; 
xcp.parameters(243).baseaddr = '&Wind_Turbine_P.GAIN_Gain';     
         
xcp.parameters(243).symbol = 'Wind_Turbine_P.GAIN_Gain_g';
xcp.parameters(243).size   =  1;       
xcp.parameters(243).dtname = 'real_T'; 
xcp.parameters(244).baseaddr = '&Wind_Turbine_P.GAIN_Gain_g';     
         
xcp.parameters(244).symbol = 'Wind_Turbine_P.GAIN_Gain_c';
xcp.parameters(244).size   =  1;       
xcp.parameters(244).dtname = 'real_T'; 
xcp.parameters(245).baseaddr = '&Wind_Turbine_P.GAIN_Gain_c';     
         
xcp.parameters(245).symbol = 'Wind_Turbine_P.GAIN_Gain_m';
xcp.parameters(245).size   =  1;       
xcp.parameters(245).dtname = 'real_T'; 
xcp.parameters(246).baseaddr = '&Wind_Turbine_P.GAIN_Gain_m';     
         
xcp.parameters(246).symbol = 'Wind_Turbine_P.GAIN_Gain_cz';
xcp.parameters(246).size   =  1;       
xcp.parameters(246).dtname = 'real_T'; 
xcp.parameters(247).baseaddr = '&Wind_Turbine_P.GAIN_Gain_cz';     
         
xcp.parameters(247).symbol = 'Wind_Turbine_P.GAIN_Gain_nu';
xcp.parameters(247).size   =  1;       
xcp.parameters(247).dtname = 'real_T'; 
xcp.parameters(248).baseaddr = '&Wind_Turbine_P.GAIN_Gain_nu';     
         
xcp.parameters(248).symbol = 'Wind_Turbine_P.GAIN_Gain_l';
xcp.parameters(248).size   =  1;       
xcp.parameters(248).dtname = 'real_T'; 
xcp.parameters(249).baseaddr = '&Wind_Turbine_P.GAIN_Gain_l';     
         
xcp.parameters(249).symbol = 'Wind_Turbine_P.GAIN_Gain_e';
xcp.parameters(249).size   =  1;       
xcp.parameters(249).dtname = 'real_T'; 
xcp.parameters(250).baseaddr = '&Wind_Turbine_P.GAIN_Gain_e';     
         
xcp.parameters(250).symbol = 'Wind_Turbine_P.u2_Value';
xcp.parameters(250).size   =  2;       
xcp.parameters(250).dtname = 'real_T'; 
xcp.parameters(251).baseaddr = '&Wind_Turbine_P.u2_Value[0]';     
         
xcp.parameters(251).symbol = 'Wind_Turbine_P.u1_Value_b';
xcp.parameters(251).size   =  16;       
xcp.parameters(251).dtname = 'real_T'; 
xcp.parameters(252).baseaddr = '&Wind_Turbine_P.u1_Value_b[0]';     
         
xcp.parameters(252).symbol = 'Wind_Turbine_P.u5_Value';
xcp.parameters(252).size   =  16;       
xcp.parameters(252).dtname = 'real_T'; 
xcp.parameters(253).baseaddr = '&Wind_Turbine_P.u5_Value[0]';     
         
xcp.parameters(253).symbol = 'Wind_Turbine_P.uTT1e6s_Gain';
xcp.parameters(253).size   =  1;       
xcp.parameters(253).dtname = 'real_T'; 
xcp.parameters(254).baseaddr = '&Wind_Turbine_P.uTT1e6s_Gain';     
         
xcp.parameters(254).symbol = 'Wind_Turbine_P.Integrator_IC';
xcp.parameters(254).size   =  1;       
xcp.parameters(254).dtname = 'real_T'; 
xcp.parameters(255).baseaddr = '&Wind_Turbine_P.Integrator_IC';     
         
xcp.parameters(255).symbol = 'Wind_Turbine_P.u1_Value';
xcp.parameters(255).size   =  2;       
xcp.parameters(255).dtname = 'real_T'; 
xcp.parameters(256).baseaddr = '&Wind_Turbine_P.u1_Value[0]';     
         
xcp.parameters(256).symbol = 'Wind_Turbine_P.Constant2_Value_l';
xcp.parameters(256).size   =  1;       
xcp.parameters(256).dtname = 'real_T'; 
xcp.parameters(257).baseaddr = '&Wind_Turbine_P.Constant2_Value_l';     
         
xcp.parameters(257).symbol = 'Wind_Turbine_P.Constant4_Value_l';
xcp.parameters(257).size   =  1;       
xcp.parameters(257).dtname = 'real_T'; 
xcp.parameters(258).baseaddr = '&Wind_Turbine_P.Constant4_Value_l.re';     
         
xcp.parameters(258).symbol = 'Wind_Turbine_P.GAIN_Gain_ne';
xcp.parameters(258).size   =  1;       
xcp.parameters(258).dtname = 'real_T'; 
xcp.parameters(259).baseaddr = '&Wind_Turbine_P.GAIN_Gain_ne';     
         
xcp.parameters(259).symbol = 'Wind_Turbine_P.GAIN_Gain_ey';
xcp.parameters(259).size   =  1;       
xcp.parameters(259).dtname = 'real_T'; 
xcp.parameters(260).baseaddr = '&Wind_Turbine_P.GAIN_Gain_ey';     
         
xcp.parameters(260).symbol = 'Wind_Turbine_P.GAIN_Gain_nex';
xcp.parameters(260).size   =  1;       
xcp.parameters(260).dtname = 'real_T'; 
xcp.parameters(261).baseaddr = '&Wind_Turbine_P.GAIN_Gain_nex';     
         
xcp.parameters(261).symbol = 'Wind_Turbine_P.GAIN_Gain_j';
xcp.parameters(261).size   =  1;       
xcp.parameters(261).dtname = 'real_T'; 
xcp.parameters(262).baseaddr = '&Wind_Turbine_P.GAIN_Gain_j';     
             
xcp.parameters(263).symbol = 'Wind_Turbine_P.WT_Params.Lift_Drag_Coeff';
xcp.parameters(263).size   = 1;
xcp.parameters(263).dtname = 'struct_VSqffC9uXgYsTbCmvsqodH'; 
             
xcp.parameters(264).symbol = 'Wind_Turbine_P.WT_Params.Air';
xcp.parameters(264).size   = 1;
xcp.parameters(264).dtname = 'struct_j4uDtLxTuVlfySlL7I37OF'; 
             
xcp.parameters(265).symbol = 'Wind_Turbine_P.WT_Params.Rotor';
xcp.parameters(265).size   = 1;
xcp.parameters(265).dtname = 'struct_Di3CnZQBxWGEFFAy3tQxi'; 
             
xcp.parameters(266).symbol = 'Wind_Turbine_P.WT_Params.NACA0015';
xcp.parameters(266).size   = 1;
xcp.parameters(266).dtname = 'struct_apfOIp3eiu3sjFRMWNq7jF'; 
             
xcp.parameters(267).symbol = 'Wind_Turbine_P.WT_Params.Tower';
xcp.parameters(267).size   = 1;
xcp.parameters(267).dtname = 'struct_SVIV8u68u95QU7HYBtdrxG'; 
             
xcp.parameters(268).symbol = 'Wind_Turbine_P.WT_Params.Blade';
xcp.parameters(268).size   = 1;
xcp.parameters(268).dtname = 'struct_EwfAMnACdOmniE2EROF9tF'; 
             
xcp.parameters(269).symbol = 'Wind_Turbine_P.WT_Params.Geartrain';
xcp.parameters(269).size   = 1;
xcp.parameters(269).dtname = 'struct_GphMeAxusWEaIPERrSwCqC'; 
             
xcp.parameters(270).symbol = 'Wind_Turbine_P.WT_Params.Empty_Geartrain';
xcp.parameters(270).size   = 1;
xcp.parameters(270).dtname = 'struct_IxHLiFZ9bqHC7py6CjHCUF'; 
             
xcp.parameters(271).symbol = 'Wind_Turbine_P.WT_Params.Pitch_Controller';
xcp.parameters(271).size   = 1;
xcp.parameters(271).dtname = 'struct_TVma8f5sh5pwgVDoSH4pdG'; 
             
xcp.parameters(272).symbol = 'Wind_Turbine_P.WT_Params.Pitch_Actuator';
xcp.parameters(272).size   = 1;
xcp.parameters(272).dtname = 'struct_0JXeuUB3gt3OTCUvuJ240D'; 
             
xcp.parameters(273).symbol = 'Wind_Turbine_P.WT_Params.Pitch_Actuation';
xcp.parameters(273).size   = 1;
xcp.parameters(273).dtname = 'struct_VSENtQ6fZQrBZOqoppZMdD'; 
             
xcp.parameters(274).symbol = 'Wind_Turbine_P.WT_Params.Generator';
xcp.parameters(274).size   = 1;
xcp.parameters(274).dtname = 'struct_Bugcbf7mGNGCxM7TeKCQAC'; 
             
xcp.parameters(275).symbol = 'Wind_Turbine_P.WT_Params.Transformer';
xcp.parameters(275).size   = 1;
xcp.parameters(275).dtname = 'struct_QlEvLM8RYCeXZuczgmMWvB'; 
             
xcp.parameters(276).symbol = 'Wind_Turbine_P.WT_Params.Grid';
xcp.parameters(276).size   = 1;
xcp.parameters(276).dtname = 'struct_hu7Ih2xmcHcBhGiXdCXRDB'; 
             
xcp.parameters(277).symbol = 'Wind_Turbine_P.WT_Params.Brakes';
xcp.parameters(277).size   = 1;
xcp.parameters(277).dtname = 'struct_9w7DyzDqSSDIxgpxbWV87G'; 
             
xcp.parameters(278).symbol = 'Wind_Turbine_P.WT_Params.Yaw_Actuator';
xcp.parameters(278).size   = 1;
xcp.parameters(278).dtname = 'struct_P2L5V6YG83XZ6MgEyLl6iE'; 
             
xcp.parameters(279).symbol = 'Wind_Turbine_P.WT_Params.Yaw_Controller';
xcp.parameters(279).size   = 1;
xcp.parameters(279).dtname = 'struct_GdoRUZPqyeOp3ZdXMVaVoH'; 
             
xcp.parameters(280).symbol = 'Wind_Turbine_P.WT_Params.Nacelle';
xcp.parameters(280).size   = 1;
xcp.parameters(280).dtname = 'struct_OvERKxa5emj52ZlerRp2AF'; 
             
xcp.parameters(281).symbol = 'Wind_Turbine_P.WT_Params.Main_Controller';
xcp.parameters(281).size   = 1;
xcp.parameters(281).dtname = 'struct_yWCqpMB2eT21MIMr1gFptC'; 
             
xcp.parameters(282).symbol = 'Wind_Turbine_P.WT_Params.Environment';
xcp.parameters(282).size   = 1;
xcp.parameters(282).dtname = 'struct_jBfPITc89BZOUITYrKwRRD'; 
xcp.parameters(282).baseaddr = '&Wind_Turbine_P.WT_Params';     
             
xcp.parameters(283).symbol = 'Wind_Turbine_P.Actuator_Lookup.extension';
xcp.parameters(283).size   = 88;
xcp.parameters(283).dtname = 'real_T'; 
             
xcp.parameters(284).symbol = 'Wind_Turbine_P.Actuator_Lookup.angle';
xcp.parameters(284).size   = 88;
xcp.parameters(284).dtname = 'real_T'; 
xcp.parameters(284).baseaddr = '&Wind_Turbine_P.Actuator_Lookup';     
         
xcp.parameters(284).symbol = 'Wind_Turbine_P.radps2rpm';
xcp.parameters(284).size   =  1;       
xcp.parameters(284).dtname = 'real_T'; 
xcp.parameters(285).baseaddr = '&Wind_Turbine_P.radps2rpm';     

function n = getNumParameters
n = 284;

function n = getNumSignals
n = 437;

function n = getNumEvents
n = 1;

function n = getNumModels
n = 1;

