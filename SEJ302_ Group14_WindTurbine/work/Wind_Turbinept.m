function pt=Wind_Turbinept
pt = [];

  
pt(1).blockname = 'Pitch Power On';
pt(1).paramname = 'Time';
pt(1).class     = 'scalar';
pt(1).nrows     = 1;
pt(1).ncols     = 1;
pt(1).subsource = 'SS_DOUBLE';
pt(1).ndims     = '2';
pt(1).size      = '[]';
pt(1).isStruct  = false;
pt(1).symbol     = 'Wind_Turbine_P.PitchPowerOn_Time';
pt(1).baseaddr   = '&Wind_Turbine_P.PitchPowerOn_Time';
pt(1).dtname     = 'real_T';

pt(getlenPT) = pt(1);


  
pt(2).blockname = 'Pitch Power On';
pt(2).paramname = 'Before';
pt(2).class     = 'scalar';
pt(2).nrows     = 1;
pt(2).ncols     = 1;
pt(2).subsource = 'SS_DOUBLE';
pt(2).ndims     = '2';
pt(2).size      = '[]';
pt(2).isStruct  = false;
pt(2).symbol     = 'Wind_Turbine_P.PitchPowerOn_Y0';
pt(2).baseaddr   = '&Wind_Turbine_P.PitchPowerOn_Y0';
pt(2).dtname     = 'real_T';



  
pt(3).blockname = 'Pitch Power On';
pt(3).paramname = 'After';
pt(3).class     = 'scalar';
pt(3).nrows     = 1;
pt(3).ncols     = 1;
pt(3).subsource = 'SS_DOUBLE';
pt(3).ndims     = '2';
pt(3).size      = '[]';
pt(3).isStruct  = false;
pt(3).symbol     = 'Wind_Turbine_P.PitchPowerOn_YFinal';
pt(3).baseaddr   = '&Wind_Turbine_P.PitchPowerOn_YFinal';
pt(3).dtname     = 'real_T';



  
pt(4).blockname = 'Grid/Grid';
pt(4).paramname = 'VariationEntity';
pt(4).class     = 'scalar';
pt(4).nrows     = 1;
pt(4).ncols     = 1;
pt(4).subsource = 'SS_DOUBLE';
pt(4).ndims     = '2';
pt(4).size      = '[]';
pt(4).isStruct  = false;
pt(4).symbol     = 'Wind_Turbine_P.Grid_VariationEntity';
pt(4).baseaddr   = '&Wind_Turbine_P.Grid_VariationEntity';
pt(4).dtname     = 'real_T';



  
pt(5).blockname = 'Grid/Grid';
pt(5).paramname = 'HarmonicGeneration';
pt(5).class     = 'scalar';
pt(5).nrows     = 1;
pt(5).ncols     = 1;
pt(5).subsource = 'SS_DOUBLE';
pt(5).ndims     = '2';
pt(5).size      = '[]';
pt(5).isStruct  = false;
pt(5).symbol     = 'Wind_Turbine_P.Grid_HarmonicGeneration';
pt(5).baseaddr   = '&Wind_Turbine_P.Grid_HarmonicGeneration';
pt(5).dtname     = 'real_T';



  
pt(6).blockname = 'Blade Load/Lift and Drag/Lag Pitch';
pt(6).paramname = 'x_initial';
pt(6).class     = 'scalar';
pt(6).nrows     = 1;
pt(6).ncols     = 1;
pt(6).subsource = 'SS_DOUBLE';
pt(6).ndims     = '2';
pt(6).size      = '[]';
pt(6).isStruct  = false;
pt(6).symbol     = 'Wind_Turbine_P.LagPitch_x_initial';
pt(6).baseaddr   = '&Wind_Turbine_P.LagPitch_x_initial';
pt(6).dtname     = 'real_T';



  
pt(7).blockname = 'Blade Load/Lift and Drag/Lag Rotor Spd';
pt(7).paramname = 'x_initial';
pt(7).class     = 'scalar';
pt(7).nrows     = 1;
pt(7).ncols     = 1;
pt(7).subsource = 'SS_DOUBLE';
pt(7).ndims     = '2';
pt(7).size      = '[]';
pt(7).isStruct  = false;
pt(7).symbol     = 'Wind_Turbine_P.LagRotorSpd_x_initial';
pt(7).baseaddr   = '&Wind_Turbine_P.LagRotorSpd_x_initial';
pt(7).dtname     = 'real_T';



  
pt(8).blockname = 'Blade Load/Lift and Drag/Point of Application';
pt(8).paramname = 'Gain';
pt(8).class     = 'scalar';
pt(8).nrows     = 1;
pt(8).ncols     = 1;
pt(8).subsource = 'SS_DOUBLE';
pt(8).ndims     = '2';
pt(8).size      = '[]';
pt(8).isStruct  = false;
pt(8).symbol     = 'Wind_Turbine_P.PointofApplication_Gain';
pt(8).baseaddr   = '&Wind_Turbine_P.PointofApplication_Gain';
pt(8).dtname     = 'real_T';



  
pt(9).blockname = 'Grid/mGrid/Kv';
pt(9).paramname = 'Gain';
pt(9).class     = 'scalar';
pt(9).nrows     = 1;
pt(9).ncols     = 1;
pt(9).subsource = 'SS_DOUBLE';
pt(9).ndims     = '2';
pt(9).size      = '[]';
pt(9).isStruct  = false;
pt(9).symbol     = 'Wind_Turbine_P.Kv_Gain_l';
pt(9).baseaddr   = '&Wind_Turbine_P.Kv_Gain_l';
pt(9).dtname     = 'real_T';



  
pt(10).blockname = 'Grid/mGrid/Kv1';
pt(10).paramname = 'Gain';
pt(10).class     = 'scalar';
pt(10).nrows     = 1;
pt(10).ncols     = 1;
pt(10).subsource = 'SS_DOUBLE';
pt(10).ndims     = '2';
pt(10).size      = '[]';
pt(10).isStruct  = false;
pt(10).symbol     = 'Wind_Turbine_P.Kv1_Gain_p';
pt(10).baseaddr   = '&Wind_Turbine_P.Kv1_Gain_p';
pt(10).dtname     = 'real_T';



  
pt(11).blockname = 'Scopes/Generator Scopes/Saturation';
pt(11).paramname = 'UpperLimit';
pt(11).class     = 'scalar';
pt(11).nrows     = 1;
pt(11).ncols     = 1;
pt(11).subsource = 'SS_DOUBLE';
pt(11).ndims     = '2';
pt(11).size      = '[]';
pt(11).isStruct  = false;
pt(11).symbol     = 'Wind_Turbine_P.Saturation_UpperSat_h';
pt(11).baseaddr   = '&Wind_Turbine_P.Saturation_UpperSat_h';
pt(11).dtname     = 'real_T';



  
pt(12).blockname = 'Scopes/Generator Scopes/Saturation';
pt(12).paramname = 'LowerLimit';
pt(12).class     = 'scalar';
pt(12).nrows     = 1;
pt(12).ncols     = 1;
pt(12).subsource = 'SS_DOUBLE';
pt(12).ndims     = '2';
pt(12).size      = '[]';
pt(12).isStruct  = false;
pt(12).symbol     = 'Wind_Turbine_P.Saturation_LowerSat_mc';
pt(12).baseaddr   = '&Wind_Turbine_P.Saturation_LowerSat_mc';
pt(12).dtname     = 'real_T';



  
pt(13).blockname = 'Yaw Controller/Yaw Controller/Limit Servomotor Torque Cmd';
pt(13).paramname = 'UpperLimit';
pt(13).class     = 'scalar';
pt(13).nrows     = 1;
pt(13).ncols     = 1;
pt(13).subsource = 'SS_DOUBLE';
pt(13).ndims     = '2';
pt(13).size      = '[]';
pt(13).isStruct  = false;
pt(13).symbol     = 'Wind_Turbine_P.LimitServomotorTorqueCmd_UpperS';
pt(13).baseaddr   = '&Wind_Turbine_P.LimitServomotorTorqueCmd_UpperS';
pt(13).dtname     = 'real_T';



  
pt(14).blockname = 'Yaw Controller/Yaw Controller/Limit Servomotor Torque Cmd';
pt(14).paramname = 'LowerLimit';
pt(14).class     = 'scalar';
pt(14).nrows     = 1;
pt(14).ncols     = 1;
pt(14).subsource = 'SS_DOUBLE';
pt(14).ndims     = '2';
pt(14).size      = '[]';
pt(14).isStruct  = false;
pt(14).symbol     = 'Wind_Turbine_P.LimitServomotorTorqueCmd_LowerS';
pt(14).baseaddr   = '&Wind_Turbine_P.LimitServomotorTorqueCmd_LowerS';
pt(14).dtname     = 'real_T';



  
pt(15).blockname = 'powergui/EquivalentModel1/State-Space';
pt(15).paramname = 'P1';
pt(15).class     = 'col-mat';
pt(15).nrows     = 17;
pt(15).ncols     = 11;
pt(15).subsource = 'SS_DOUBLE';
pt(15).ndims     = '2';
pt(15).size      = '[]';
pt(15).isStruct  = false;
pt(15).symbol     = 'Wind_Turbine_P.StateSpace_P1';
pt(15).baseaddr   = '&Wind_Turbine_P.StateSpace_P1[0]';
pt(15).dtname     = 'real_T';



  
pt(16).blockname = 'powergui/EquivalentModel1/State-Space';
pt(16).paramname = 'P2';
pt(16).class     = 'col-mat';
pt(16).nrows     = 17;
pt(16).ncols     = 11;
pt(16).subsource = 'SS_DOUBLE';
pt(16).ndims     = '2';
pt(16).size      = '[]';
pt(16).isStruct  = false;
pt(16).symbol     = 'Wind_Turbine_P.StateSpace_P2';
pt(16).baseaddr   = '&Wind_Turbine_P.StateSpace_P2[0]';
pt(16).dtname     = 'real_T';



  
pt(17).blockname = 'powergui/EquivalentModel1/State-Space';
pt(17).paramname = 'P3';
pt(17).class     = 'vector';
pt(17).nrows     = 6;
pt(17).ncols     = 1;
pt(17).subsource = 'SS_DOUBLE';
pt(17).ndims     = '2';
pt(17).size      = '[]';
pt(17).isStruct  = false;
pt(17).symbol     = 'Wind_Turbine_P.StateSpace_P3';
pt(17).baseaddr   = '&Wind_Turbine_P.StateSpace_P3[0]';
pt(17).dtname     = 'real_T';



  
pt(18).blockname = 'powergui/EquivalentModel1/State-Space';
pt(18).paramname = 'P4';
pt(18).class     = 'vector';
pt(18).nrows     = 1;
pt(18).ncols     = 5;
pt(18).subsource = 'SS_DOUBLE';
pt(18).ndims     = '2';
pt(18).size      = '[]';
pt(18).isStruct  = false;
pt(18).symbol     = 'Wind_Turbine_P.StateSpace_P4';
pt(18).baseaddr   = '&Wind_Turbine_P.StateSpace_P4[0]';
pt(18).dtname     = 'real_T';



  
pt(19).blockname = 'Blade Load/Lift and Drag/Apply Moments/Pitch Moment';
pt(19).paramname = 'Value';
pt(19).class     = 'scalar';
pt(19).nrows     = 1;
pt(19).ncols     = 1;
pt(19).subsource = 'SS_DOUBLE';
pt(19).ndims     = '2';
pt(19).size      = '[]';
pt(19).isStruct  = false;
pt(19).symbol     = 'Wind_Turbine_P.PitchMoment_Value';
pt(19).baseaddr   = '&Wind_Turbine_P.PitchMoment_Value';
pt(19).dtname     = 'real_T';



  
pt(20).blockname = 'Blade Load/Lift and Drag/Apply Moments/Gain';
pt(20).paramname = 'Gain';
pt(20).class     = 'scalar';
pt(20).nrows     = 1;
pt(20).ncols     = 1;
pt(20).subsource = 'SS_DOUBLE';
pt(20).ndims     = '2';
pt(20).size      = '[]';
pt(20).isStruct  = false;
pt(20).symbol     = 'Wind_Turbine_P.Gain_Gain_f';
pt(20).baseaddr   = '&Wind_Turbine_P.Gain_Gain_f';
pt(20).dtname     = 'real_T';



  
pt(21).blockname = 'Blade Load/Lift and Drag/Calculate Lift and Drag Forces/f2';
pt(21).paramname = 'Value';
pt(21).class     = 'scalar';
pt(21).nrows     = 1;
pt(21).ncols     = 1;
pt(21).subsource = 'SS_DOUBLE';
pt(21).ndims     = '2';
pt(21).size      = '[]';
pt(21).isStruct  = false;
pt(21).symbol     = 'Wind_Turbine_P.f2_Value';
pt(21).baseaddr   = '&Wind_Turbine_P.f2_Value';
pt(21).dtname     = 'real_T';



  
pt(22).blockname = 'Blade Load/Lift and Drag/Obtain Lift and Drag Constants/f1';
pt(22).paramname = 'Value';
pt(22).class     = 'scalar';
pt(22).nrows     = 1;
pt(22).ncols     = 1;
pt(22).subsource = 'SS_DOUBLE';
pt(22).ndims     = '2';
pt(22).size      = '[]';
pt(22).isStruct  = false;
pt(22).symbol     = 'Wind_Turbine_P.f1_Value';
pt(22).baseaddr   = '&Wind_Turbine_P.f1_Value';
pt(22).dtname     = 'real_T';



  
pt(23).blockname = 'Blade Load/Lift and Drag/Resolve Moments/Gain';
pt(23).paramname = 'Gain';
pt(23).class     = 'scalar';
pt(23).nrows     = 1;
pt(23).ncols     = 1;
pt(23).subsource = 'SS_DOUBLE';
pt(23).ndims     = '2';
pt(23).size      = '[]';
pt(23).isStruct  = false;
pt(23).symbol     = 'Wind_Turbine_P.Gain_Gain_g';
pt(23).baseaddr   = '&Wind_Turbine_P.Gain_Gain_g';
pt(23).dtname     = 'real_T';



  
pt(24).blockname = 'Grid/Grid/Model/Seq A Generation';
pt(24).paramname = 'Mag_Harmo';
pt(24).class     = 'scalar';
pt(24).nrows     = 1;
pt(24).ncols     = 1;
pt(24).subsource = 'SS_DOUBLE';
pt(24).ndims     = '2';
pt(24).size      = '[]';
pt(24).isStruct  = false;
pt(24).symbol     = 'Wind_Turbine_P.SeqAGeneration_Mag_Harmo';
pt(24).baseaddr   = '&Wind_Turbine_P.SeqAGeneration_Mag_Harmo';
pt(24).dtname     = 'real_T';



  
pt(25).blockname = 'Grid/Grid/Model/Seq A Generation';
pt(25).paramname = 'Phase_Harmo';
pt(25).class     = 'scalar';
pt(25).nrows     = 1;
pt(25).ncols     = 1;
pt(25).subsource = 'SS_DOUBLE';
pt(25).ndims     = '2';
pt(25).size      = '[]';
pt(25).isStruct  = false;
pt(25).symbol     = 'Wind_Turbine_P.SeqAGeneration_Phase_Harmo';
pt(25).baseaddr   = '&Wind_Turbine_P.SeqAGeneration_Phase_Harmo';
pt(25).dtname     = 'real_T';



  
pt(26).blockname = 'Grid/Grid/Model/Seq A Generation';
pt(26).paramname = 'Seq_Harmo';
pt(26).class     = 'scalar';
pt(26).nrows     = 1;
pt(26).ncols     = 1;
pt(26).subsource = 'SS_DOUBLE';
pt(26).ndims     = '2';
pt(26).size      = '[]';
pt(26).isStruct  = false;
pt(26).symbol     = 'Wind_Turbine_P.SeqAGeneration_Seq_Harmo';
pt(26).baseaddr   = '&Wind_Turbine_P.SeqAGeneration_Seq_Harmo';
pt(26).dtname     = 'real_T';



  
pt(27).blockname = 'Grid/Grid/Model/Seq B Generation';
pt(27).paramname = 'Mag_Harmo';
pt(27).class     = 'scalar';
pt(27).nrows     = 1;
pt(27).ncols     = 1;
pt(27).subsource = 'SS_DOUBLE';
pt(27).ndims     = '2';
pt(27).size      = '[]';
pt(27).isStruct  = false;
pt(27).symbol     = 'Wind_Turbine_P.SeqBGeneration_Mag_Harmo';
pt(27).baseaddr   = '&Wind_Turbine_P.SeqBGeneration_Mag_Harmo';
pt(27).dtname     = 'real_T';



  
pt(28).blockname = 'Grid/Grid/Model/Seq B Generation';
pt(28).paramname = 'Phase_Harmo';
pt(28).class     = 'scalar';
pt(28).nrows     = 1;
pt(28).ncols     = 1;
pt(28).subsource = 'SS_DOUBLE';
pt(28).ndims     = '2';
pt(28).size      = '[]';
pt(28).isStruct  = false;
pt(28).symbol     = 'Wind_Turbine_P.SeqBGeneration_Phase_Harmo';
pt(28).baseaddr   = '&Wind_Turbine_P.SeqBGeneration_Phase_Harmo';
pt(28).dtname     = 'real_T';



  
pt(29).blockname = 'Grid/Grid/Model/Seq B Generation';
pt(29).paramname = 'Seq_Harmo';
pt(29).class     = 'scalar';
pt(29).nrows     = 1;
pt(29).ncols     = 1;
pt(29).subsource = 'SS_DOUBLE';
pt(29).ndims     = '2';
pt(29).size      = '[]';
pt(29).isStruct  = false;
pt(29).symbol     = 'Wind_Turbine_P.SeqBGeneration_Seq_Harmo';
pt(29).baseaddr   = '&Wind_Turbine_P.SeqBGeneration_Seq_Harmo';
pt(29).dtname     = 'real_T';



  
pt(30).blockname = 'Grid/Grid/Model/Variation SubSystem';
pt(30).paramname = 'VariationStep';
pt(30).class     = 'scalar';
pt(30).nrows     = 1;
pt(30).ncols     = 1;
pt(30).subsource = 'SS_DOUBLE';
pt(30).ndims     = '2';
pt(30).size      = '[]';
pt(30).isStruct  = false;
pt(30).symbol     = 'Wind_Turbine_P.VariationSubSystem_VariationSte';
pt(30).baseaddr   = '&Wind_Turbine_P.VariationSubSystem_VariationSte';
pt(30).dtname     = 'real_T';



  
pt(31).blockname = 'Grid/Grid/Model/Variation SubSystem';
pt(31).paramname = 'VariationRate';
pt(31).class     = 'scalar';
pt(31).nrows     = 1;
pt(31).ncols     = 1;
pt(31).subsource = 'SS_DOUBLE';
pt(31).ndims     = '2';
pt(31).size      = '[]';
pt(31).isStruct  = false;
pt(31).symbol     = 'Wind_Turbine_P.VariationSubSystem_VariationRat';
pt(31).baseaddr   = '&Wind_Turbine_P.VariationSubSystem_VariationRat';
pt(31).dtname     = 'real_T';



  
pt(32).blockname = 'Grid/Grid/Model/Variation SubSystem';
pt(32).paramname = 'VariationFreq';
pt(32).class     = 'scalar';
pt(32).nrows     = 1;
pt(32).ncols     = 1;
pt(32).subsource = 'SS_DOUBLE';
pt(32).ndims     = '2';
pt(32).size      = '[]';
pt(32).isStruct  = false;
pt(32).symbol     = 'Wind_Turbine_P.VariationSubSystem_VariationFre';
pt(32).baseaddr   = '&Wind_Turbine_P.VariationSubSystem_VariationFre';
pt(32).dtname     = 'real_T';



  
pt(33).blockname = 'Grid/Grid/Model/Variation SubSystem';
pt(33).paramname = 'VariationMag';
pt(33).class     = 'scalar';
pt(33).nrows     = 1;
pt(33).ncols     = 1;
pt(33).subsource = 'SS_DOUBLE';
pt(33).ndims     = '2';
pt(33).size      = '[]';
pt(33).isStruct  = false;
pt(33).symbol     = 'Wind_Turbine_P.VariationSubSystem_VariationMag';
pt(33).baseaddr   = '&Wind_Turbine_P.VariationSubSystem_VariationMag';
pt(33).dtname     = 'real_T';



  
pt(34).blockname = 'Grid/Grid/Model/Variation SubSystem';
pt(34).paramname = 'Ton_Variation';
pt(34).class     = 'scalar';
pt(34).nrows     = 1;
pt(34).ncols     = 1;
pt(34).subsource = 'SS_DOUBLE';
pt(34).ndims     = '2';
pt(34).size      = '[]';
pt(34).isStruct  = false;
pt(34).symbol     = 'Wind_Turbine_P.VariationSubSystem_Ton_Variatio';
pt(34).baseaddr   = '&Wind_Turbine_P.VariationSubSystem_Ton_Variatio';
pt(34).dtname     = 'real_T';



  
pt(35).blockname = 'Grid/Grid/Model/Variation SubSystem';
pt(35).paramname = 'Toff_Variation';
pt(35).class     = 'scalar';
pt(35).nrows     = 1;
pt(35).ncols     = 1;
pt(35).subsource = 'SS_DOUBLE';
pt(35).ndims     = '2';
pt(35).size      = '[]';
pt(35).isStruct  = false;
pt(35).symbol     = 'Wind_Turbine_P.VariationSubSystem_Toff_Variati';
pt(35).baseaddr   = '&Wind_Turbine_P.VariationSubSystem_Toff_Variati';
pt(35).dtname     = 'real_T';



  
pt(36).blockname = 'Grid/Grid/Model/Constant';
pt(36).paramname = 'Value';
pt(36).class     = 'scalar';
pt(36).nrows     = 1;
pt(36).ncols     = 1;
pt(36).subsource = 'SS_DOUBLE';
pt(36).ndims     = '2';
pt(36).size      = '[]';
pt(36).isStruct  = false;
pt(36).symbol     = 'Wind_Turbine_P.Constant_Value_i';
pt(36).baseaddr   = '&Wind_Turbine_P.Constant_Value_i';
pt(36).dtname     = 'real_T';



  
pt(37).blockname = 'Grid/Grid/Model/Constant1';
pt(37).paramname = 'Value';
pt(37).class     = 'scalar';
pt(37).nrows     = 1;
pt(37).ncols     = 1;
pt(37).subsource = 'SS_DOUBLE';
pt(37).ndims     = '2';
pt(37).size      = '[]';
pt(37).isStruct  = false;
pt(37).symbol     = 'Wind_Turbine_P.Constant1_Value_nt';
pt(37).baseaddr   = '&Wind_Turbine_P.Constant1_Value_nt';
pt(37).dtname     = 'real_T';



  
pt(38).blockname = 'Grid/Grid/Model/Constant2';
pt(38).paramname = 'Value';
pt(38).class     = 'scalar';
pt(38).nrows     = 1;
pt(38).ncols     = 1;
pt(38).subsource = 'SS_DOUBLE';
pt(38).ndims     = '2';
pt(38).size      = '[]';
pt(38).isStruct  = false;
pt(38).symbol     = 'Wind_Turbine_P.Constant2_Value_f';
pt(38).baseaddr   = '&Wind_Turbine_P.Constant2_Value_f';
pt(38).dtname     = 'real_T';



  
pt(39).blockname = 'Grid/Grid/Model/Constant4';
pt(39).paramname = 'Value';
pt(39).class     = 'scalar';
pt(39).nrows     = 1;
pt(39).ncols     = 1;
pt(39).subsource = 'SS_DOUBLE';
pt(39).ndims     = '2';
pt(39).size      = '[]';
pt(39).isStruct  = false;
pt(39).symbol     = 'Wind_Turbine_P.Constant4_Value';
pt(39).baseaddr   = '&Wind_Turbine_P.Constant4_Value';
pt(39).dtname     = 'real_T';



  
pt(40).blockname = 'Grid/Grid/Model/Constant6';
pt(40).paramname = 'Value';
pt(40).class     = 'scalar';
pt(40).nrows     = 1;
pt(40).ncols     = 1;
pt(40).subsource = 'SS_DOUBLE';
pt(40).ndims     = '2';
pt(40).size      = '[]';
pt(40).isStruct  = false;
pt(40).symbol     = 'Wind_Turbine_P.Constant6_Value';
pt(40).baseaddr   = '&Wind_Turbine_P.Constant6_Value';
pt(40).dtname     = 'real_T';



  
pt(41).blockname = 'Grid/Grid/Model/P1';
pt(41).paramname = 'Value';
pt(41).class     = 'vector';
pt(41).nrows     = 1;
pt(41).ncols     = 3;
pt(41).subsource = 'SS_DOUBLE';
pt(41).ndims     = '2';
pt(41).size      = '[]';
pt(41).isStruct  = false;
pt(41).symbol     = 'Wind_Turbine_P.P1_Value';
pt(41).baseaddr   = '&Wind_Turbine_P.P1_Value[0]';
pt(41).dtname     = 'real_T';



  
pt(42).blockname = 'Grid/Grid/Model/SinglePhase';
pt(42).paramname = 'Value';
pt(42).class     = 'scalar';
pt(42).nrows     = 1;
pt(42).ncols     = 1;
pt(42).subsource = 'SS_DOUBLE';
pt(42).ndims     = '2';
pt(42).size      = '[]';
pt(42).isStruct  = false;
pt(42).symbol     = 'Wind_Turbine_P.SinglePhase_Value';
pt(42).baseaddr   = '&Wind_Turbine_P.SinglePhase_Value';
pt(42).dtname     = 'real_T';



  
pt(43).blockname = 'Grid/Grid/Model/valp_nom';
pt(43).paramname = 'Value';
pt(43).class     = 'scalar';
pt(43).nrows     = 1;
pt(43).ncols     = 1;
pt(43).subsource = 'SS_DOUBLE';
pt(43).ndims     = '2';
pt(43).size      = '[]';
pt(43).isStruct  = false;
pt(43).symbol     = 'Wind_Turbine_P.valp_nom_Value';
pt(43).baseaddr   = '&Wind_Turbine_P.valp_nom_Value';
pt(43).dtname     = 'real_T';



  
pt(44).blockname = 'Grid/Grid/Model/valp_nom2';
pt(44).paramname = 'Value';
pt(44).class     = 'scalar';
pt(44).nrows     = 1;
pt(44).ncols     = 1;
pt(44).subsource = 'SS_DOUBLE';
pt(44).ndims     = '2';
pt(44).size      = '[]';
pt(44).isStruct  = false;
pt(44).symbol     = 'Wind_Turbine_P.valp_nom2_Value';
pt(44).baseaddr   = '&Wind_Turbine_P.valp_nom2_Value';
pt(44).dtname     = 'real_T';



  
pt(45).blockname = 'Grid/Grid/Model/valp_nom5';
pt(45).paramname = 'Value';
pt(45).class     = 'scalar';
pt(45).nrows     = 1;
pt(45).ncols     = 1;
pt(45).subsource = 'SS_DOUBLE';
pt(45).ndims     = '2';
pt(45).size      = '[]';
pt(45).isStruct  = false;
pt(45).symbol     = 'Wind_Turbine_P.valp_nom5_Value';
pt(45).baseaddr   = '&Wind_Turbine_P.valp_nom5_Value';
pt(45).dtname     = 'real_T';



  
pt(46).blockname = 'Grid/Grid/Model/Gain3';
pt(46).paramname = 'Gain';
pt(46).class     = 'scalar';
pt(46).nrows     = 1;
pt(46).ncols     = 1;
pt(46).subsource = 'SS_DOUBLE';
pt(46).ndims     = '2';
pt(46).size      = '[]';
pt(46).isStruct  = false;
pt(46).symbol     = 'Wind_Turbine_P.Gain3_Gain';
pt(46).baseaddr   = '&Wind_Turbine_P.Gain3_Gain';
pt(46).dtname     = 'real_T';



  
pt(47).blockname = 'Grid/Grid/Model/Gain4';
pt(47).paramname = 'Gain';
pt(47).class     = 'scalar';
pt(47).nrows     = 1;
pt(47).ncols     = 1;
pt(47).subsource = 'SS_DOUBLE';
pt(47).ndims     = '2';
pt(47).size      = '[]';
pt(47).isStruct  = false;
pt(47).symbol     = 'Wind_Turbine_P.Gain4_Gain';
pt(47).baseaddr   = '&Wind_Turbine_P.Gain4_Gain';
pt(47).dtname     = 'real_T';



  
pt(48).blockname = 'Grid/Grid/Model/Step';
pt(48).paramname = 'Time';
pt(48).class     = 'scalar';
pt(48).nrows     = 1;
pt(48).ncols     = 1;
pt(48).subsource = 'SS_DOUBLE';
pt(48).ndims     = '2';
pt(48).size      = '[]';
pt(48).isStruct  = false;
pt(48).symbol     = 'Wind_Turbine_P.Step_Time';
pt(48).baseaddr   = '&Wind_Turbine_P.Step_Time';
pt(48).dtname     = 'real_T';



  
pt(49).blockname = 'Grid/Grid/Model/Step';
pt(49).paramname = 'Before';
pt(49).class     = 'scalar';
pt(49).nrows     = 1;
pt(49).ncols     = 1;
pt(49).subsource = 'SS_DOUBLE';
pt(49).ndims     = '2';
pt(49).size      = '[]';
pt(49).isStruct  = false;
pt(49).symbol     = 'Wind_Turbine_P.Step_Y0_a';
pt(49).baseaddr   = '&Wind_Turbine_P.Step_Y0_a';
pt(49).dtname     = 'real_T';



  
pt(50).blockname = 'Grid/Grid/Model/Step';
pt(50).paramname = 'After';
pt(50).class     = 'scalar';
pt(50).nrows     = 1;
pt(50).ncols     = 1;
pt(50).subsource = 'SS_DOUBLE';
pt(50).ndims     = '2';
pt(50).size      = '[]';
pt(50).isStruct  = false;
pt(50).symbol     = 'Wind_Turbine_P.Step_YFinal_c';
pt(50).baseaddr   = '&Wind_Turbine_P.Step_YFinal_c';
pt(50).dtname     = 'real_T';



  
pt(51).blockname = 'Grid/Grid/Model/Step1';
pt(51).paramname = 'Time';
pt(51).class     = 'scalar';
pt(51).nrows     = 1;
pt(51).ncols     = 1;
pt(51).subsource = 'SS_DOUBLE';
pt(51).ndims     = '2';
pt(51).size      = '[]';
pt(51).isStruct  = false;
pt(51).symbol     = 'Wind_Turbine_P.Step1_Time';
pt(51).baseaddr   = '&Wind_Turbine_P.Step1_Time';
pt(51).dtname     = 'real_T';



  
pt(52).blockname = 'Grid/Grid/Model/Step1';
pt(52).paramname = 'Before';
pt(52).class     = 'scalar';
pt(52).nrows     = 1;
pt(52).ncols     = 1;
pt(52).subsource = 'SS_DOUBLE';
pt(52).ndims     = '2';
pt(52).size      = '[]';
pt(52).isStruct  = false;
pt(52).symbol     = 'Wind_Turbine_P.Step1_Y0_j';
pt(52).baseaddr   = '&Wind_Turbine_P.Step1_Y0_j';
pt(52).dtname     = 'real_T';



  
pt(53).blockname = 'Grid/Grid/Model/Step1';
pt(53).paramname = 'After';
pt(53).class     = 'scalar';
pt(53).nrows     = 1;
pt(53).ncols     = 1;
pt(53).subsource = 'SS_DOUBLE';
pt(53).ndims     = '2';
pt(53).size      = '[]';
pt(53).isStruct  = false;
pt(53).symbol     = 'Wind_Turbine_P.Step1_YFinal_d';
pt(53).baseaddr   = '&Wind_Turbine_P.Step1_YFinal_d';
pt(53).dtname     = 'real_T';



  
pt(54).blockname = 'Grid/Grid/Model/Switch5';
pt(54).paramname = 'Threshold';
pt(54).class     = 'scalar';
pt(54).nrows     = 1;
pt(54).ncols     = 1;
pt(54).subsource = 'SS_DOUBLE';
pt(54).ndims     = '2';
pt(54).size      = '[]';
pt(54).isStruct  = false;
pt(54).symbol     = 'Wind_Turbine_P.Switch5_Threshold';
pt(54).baseaddr   = '&Wind_Turbine_P.Switch5_Threshold';
pt(54).dtname     = 'real_T';



  
pt(55).blockname = 'Nacelle/Generator/Full/Actuator Dynamics';
pt(55).paramname = 'x_initial';
pt(55).class     = 'scalar';
pt(55).nrows     = 1;
pt(55).ncols     = 1;
pt(55).subsource = 'SS_DOUBLE';
pt(55).ndims     = '2';
pt(55).size      = '[]';
pt(55).isStruct  = false;
pt(55).symbol     = 'Wind_Turbine_P.ActuatorDynamics_x_initial_n';
pt(55).baseaddr   = '&Wind_Turbine_P.ActuatorDynamics_x_initial_n';
pt(55).dtname     = 'real_T';



  
pt(56).blockname = 'Nacelle/Generator/Full/Actuator Dynamics1';
pt(56).paramname = 'x_initial';
pt(56).class     = 'scalar';
pt(56).nrows     = 1;
pt(56).ncols     = 1;
pt(56).subsource = 'SS_DOUBLE';
pt(56).ndims     = '2';
pt(56).size      = '[]';
pt(56).isStruct  = false;
pt(56).symbol     = 'Wind_Turbine_P.ActuatorDynamics1_x_initial';
pt(56).baseaddr   = '&Wind_Turbine_P.ActuatorDynamics1_x_initial';
pt(56).dtname     = 'real_T';



  
pt(57).blockname = 'Nacelle/Generator/Full/Trip Breaker1';
pt(57).paramname = 'SwitchA';
pt(57).class     = 'scalar';
pt(57).nrows     = 1;
pt(57).ncols     = 1;
pt(57).subsource = 'SS_DOUBLE';
pt(57).ndims     = '2';
pt(57).size      = '[]';
pt(57).isStruct  = false;
pt(57).symbol     = 'Wind_Turbine_P.TripBreaker1_SwitchA';
pt(57).baseaddr   = '&Wind_Turbine_P.TripBreaker1_SwitchA';
pt(57).dtname     = 'real_T';



  
pt(58).blockname = 'Nacelle/Generator/Full/Trip Breaker1';
pt(58).paramname = 'SwitchB';
pt(58).class     = 'scalar';
pt(58).nrows     = 1;
pt(58).ncols     = 1;
pt(58).subsource = 'SS_DOUBLE';
pt(58).ndims     = '2';
pt(58).size      = '[]';
pt(58).isStruct  = false;
pt(58).symbol     = 'Wind_Turbine_P.TripBreaker1_SwitchB';
pt(58).baseaddr   = '&Wind_Turbine_P.TripBreaker1_SwitchB';
pt(58).dtname     = 'real_T';



  
pt(59).blockname = 'Nacelle/Generator/Full/Trip Breaker1';
pt(59).paramname = 'SwitchC';
pt(59).class     = 'scalar';
pt(59).nrows     = 1;
pt(59).ncols     = 1;
pt(59).subsource = 'SS_DOUBLE';
pt(59).ndims     = '2';
pt(59).size      = '[]';
pt(59).isStruct  = false;
pt(59).symbol     = 'Wind_Turbine_P.TripBreaker1_SwitchC';
pt(59).baseaddr   = '&Wind_Turbine_P.TripBreaker1_SwitchC';
pt(59).dtname     = 'real_T';



  
pt(60).blockname = 'Nacelle/Generator/Full/Trip Breaker2';
pt(60).paramname = 'SwitchA';
pt(60).class     = 'scalar';
pt(60).nrows     = 1;
pt(60).ncols     = 1;
pt(60).subsource = 'SS_DOUBLE';
pt(60).ndims     = '2';
pt(60).size      = '[]';
pt(60).isStruct  = false;
pt(60).symbol     = 'Wind_Turbine_P.TripBreaker2_SwitchA';
pt(60).baseaddr   = '&Wind_Turbine_P.TripBreaker2_SwitchA';
pt(60).dtname     = 'real_T';



  
pt(61).blockname = 'Nacelle/Generator/Full/Trip Breaker2';
pt(61).paramname = 'SwitchB';
pt(61).class     = 'scalar';
pt(61).nrows     = 1;
pt(61).ncols     = 1;
pt(61).subsource = 'SS_DOUBLE';
pt(61).ndims     = '2';
pt(61).size      = '[]';
pt(61).isStruct  = false;
pt(61).symbol     = 'Wind_Turbine_P.TripBreaker2_SwitchB';
pt(61).baseaddr   = '&Wind_Turbine_P.TripBreaker2_SwitchB';
pt(61).dtname     = 'real_T';



  
pt(62).blockname = 'Nacelle/Generator/Full/Trip Breaker2';
pt(62).paramname = 'SwitchC';
pt(62).class     = 'scalar';
pt(62).nrows     = 1;
pt(62).ncols     = 1;
pt(62).subsource = 'SS_DOUBLE';
pt(62).ndims     = '2';
pt(62).size      = '[]';
pt(62).isStruct  = false;
pt(62).symbol     = 'Wind_Turbine_P.TripBreaker2_SwitchC';
pt(62).baseaddr   = '&Wind_Turbine_P.TripBreaker2_SwitchC';
pt(62).dtname     = 'real_T';



  
pt(63).blockname = 'Scopes/Generator Scopes/pu to MW//MVar/Constant1';
pt(63).paramname = 'Value';
pt(63).class     = 'scalar';
pt(63).nrows     = 1;
pt(63).ncols     = 1;
pt(63).subsource = 'SS_DOUBLE';
pt(63).ndims     = '2';
pt(63).size      = '[]';
pt(63).isStruct  = false;
pt(63).symbol     = 'Wind_Turbine_P.Constant1_Value_g';
pt(63).baseaddr   = '&Wind_Turbine_P.Constant1_Value_g';
pt(63).dtname     = 'real_T';



  
pt(64).blockname = 'Scopes/Generator Scopes/pu to MW//MVar/Fix Sign';
pt(64).paramname = 'Gain';
pt(64).class     = 'scalar';
pt(64).nrows     = 1;
pt(64).ncols     = 1;
pt(64).subsource = 'SS_DOUBLE';
pt(64).ndims     = '2';
pt(64).size      = '[]';
pt(64).isStruct  = false;
pt(64).symbol     = 'Wind_Turbine_P.FixSign_Gain';
pt(64).baseaddr   = '&Wind_Turbine_P.FixSign_Gain';
pt(64).dtname     = 'real_T';



  
pt(65).blockname = 'Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw/Integrator';
pt(65).paramname = 'InitialCondition';
pt(65).class     = 'scalar';
pt(65).nrows     = 1;
pt(65).ncols     = 1;
pt(65).subsource = 'SS_DOUBLE';
pt(65).ndims     = '2';
pt(65).size      = '[]';
pt(65).isStruct  = false;
pt(65).symbol     = 'Wind_Turbine_P.Integrator_IC_di';
pt(65).baseaddr   = '&Wind_Turbine_P.Integrator_IC_di';
pt(65).dtname     = 'real_T';



  
pt(66).blockname = 'Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw Rate/Integrator';
pt(66).paramname = 'InitialCondition';
pt(66).class     = 'scalar';
pt(66).nrows     = 1;
pt(66).ncols     = 1;
pt(66).subsource = 'SS_DOUBLE';
pt(66).ndims     = '2';
pt(66).size      = '[]';
pt(66).isStruct  = false;
pt(66).symbol     = 'Wind_Turbine_P.Integrator_IC_gs';
pt(66).baseaddr   = '&Wind_Turbine_P.Integrator_IC_gs';
pt(66).dtname     = 'real_T';



  
pt(67).blockname = 'Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw Rate/Integrator';
pt(67).paramname = 'UpperSaturationLimit';
pt(67).class     = 'scalar';
pt(67).nrows     = 1;
pt(67).ncols     = 1;
pt(67).subsource = 'SS_DOUBLE';
pt(67).ndims     = '2';
pt(67).size      = '[]';
pt(67).isStruct  = false;
pt(67).symbol     = 'Wind_Turbine_P.Integrator_UpperSat';
pt(67).baseaddr   = '&Wind_Turbine_P.Integrator_UpperSat';
pt(67).dtname     = 'real_T';



  
pt(68).blockname = 'Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw Rate/Integrator';
pt(68).paramname = 'LowerSaturationLimit';
pt(68).class     = 'scalar';
pt(68).nrows     = 1;
pt(68).ncols     = 1;
pt(68).subsource = 'SS_DOUBLE';
pt(68).ndims     = '2';
pt(68).size      = '[]';
pt(68).isStruct  = false;
pt(68).symbol     = 'Wind_Turbine_P.Integrator_LowerSat';
pt(68).baseaddr   = '&Wind_Turbine_P.Integrator_LowerSat';
pt(68).dtname     = 'real_T';



  
pt(69).blockname = 'powergui/EquivalentModel1/Sources/SwitchCurrents';
pt(69).paramname = 'Value';
pt(69).class     = 'vector';
pt(69).nrows     = 6;
pt(69).ncols     = 1;
pt(69).subsource = 'SS_DOUBLE';
pt(69).ndims     = '2';
pt(69).size      = '[]';
pt(69).isStruct  = true;
pt(69).symbol     = 'Wind_Turbine_P.SwitchCurrents_Value';
pt(69).baseaddr   = '&Wind_Turbine_P.SwitchCurrents_Value[0].re';
pt(69).dtname     = 'real_T';



  
pt(70).blockname = 'Grid/Grid/Model/Seq A Generation/Negative-sequence';
pt(70).paramname = 'Value';
pt(70).class     = 'vector';
pt(70).nrows     = 1;
pt(70).ncols     = 3;
pt(70).subsource = 'SS_DOUBLE';
pt(70).ndims     = '2';
pt(70).size      = '[]';
pt(70).isStruct  = false;
pt(70).symbol     = 'Wind_Turbine_P.Negativesequence_Value';
pt(70).baseaddr   = '&Wind_Turbine_P.Negativesequence_Value[0]';
pt(70).dtname     = 'real_T';



  
pt(71).blockname = 'Grid/Grid/Model/Seq A Generation/Positive-sequence';
pt(71).paramname = 'Value';
pt(71).class     = 'vector';
pt(71).nrows     = 1;
pt(71).ncols     = 3;
pt(71).subsource = 'SS_DOUBLE';
pt(71).ndims     = '2';
pt(71).size      = '[]';
pt(71).isStruct  = false;
pt(71).symbol     = 'Wind_Turbine_P.Positivesequence_Value';
pt(71).baseaddr   = '&Wind_Turbine_P.Positivesequence_Value[0]';
pt(71).dtname     = 'real_T';



  
pt(72).blockname = 'Grid/Grid/Model/Seq A Generation/Zero-sequence';
pt(72).paramname = 'Value';
pt(72).class     = 'vector';
pt(72).nrows     = 1;
pt(72).ncols     = 3;
pt(72).subsource = 'SS_DOUBLE';
pt(72).ndims     = '2';
pt(72).size      = '[]';
pt(72).isStruct  = false;
pt(72).symbol     = 'Wind_Turbine_P.Zerosequence_Value';
pt(72).baseaddr   = '&Wind_Turbine_P.Zerosequence_Value[0]';
pt(72).dtname     = 'real_T';



  
pt(73).blockname = 'Grid/Grid/Model/Seq A Generation/valp_nom2';
pt(73).paramname = 'Value';
pt(73).class     = 'scalar';
pt(73).nrows     = 1;
pt(73).ncols     = 1;
pt(73).subsource = 'SS_DOUBLE';
pt(73).ndims     = '2';
pt(73).size      = '[]';
pt(73).isStruct  = false;
pt(73).symbol     = 'Wind_Turbine_P.valp_nom2_Value_p';
pt(73).baseaddr   = '&Wind_Turbine_P.valp_nom2_Value_p';
pt(73).dtname     = 'real_T';



  
pt(74).blockname = 'Grid/Grid/Model/Seq A Generation/Gain3';
pt(74).paramname = 'Gain';
pt(74).class     = 'scalar';
pt(74).nrows     = 1;
pt(74).ncols     = 1;
pt(74).subsource = 'SS_DOUBLE';
pt(74).ndims     = '2';
pt(74).size      = '[]';
pt(74).isStruct  = false;
pt(74).symbol     = 'Wind_Turbine_P.Gain3_Gain_f';
pt(74).baseaddr   = '&Wind_Turbine_P.Gain3_Gain_f';
pt(74).dtname     = 'real_T';



  
pt(75).blockname = 'Grid/Grid/Model/Seq B Generation/Negative-sequence';
pt(75).paramname = 'Value';
pt(75).class     = 'vector';
pt(75).nrows     = 1;
pt(75).ncols     = 3;
pt(75).subsource = 'SS_DOUBLE';
pt(75).ndims     = '2';
pt(75).size      = '[]';
pt(75).isStruct  = false;
pt(75).symbol     = 'Wind_Turbine_P.Negativesequence_Value_l';
pt(75).baseaddr   = '&Wind_Turbine_P.Negativesequence_Value_l[0]';
pt(75).dtname     = 'real_T';



  
pt(76).blockname = 'Grid/Grid/Model/Seq B Generation/Positive-sequence';
pt(76).paramname = 'Value';
pt(76).class     = 'vector';
pt(76).nrows     = 1;
pt(76).ncols     = 3;
pt(76).subsource = 'SS_DOUBLE';
pt(76).ndims     = '2';
pt(76).size      = '[]';
pt(76).isStruct  = false;
pt(76).symbol     = 'Wind_Turbine_P.Positivesequence_Value_d';
pt(76).baseaddr   = '&Wind_Turbine_P.Positivesequence_Value_d[0]';
pt(76).dtname     = 'real_T';



  
pt(77).blockname = 'Grid/Grid/Model/Seq B Generation/Zero-sequence';
pt(77).paramname = 'Value';
pt(77).class     = 'vector';
pt(77).nrows     = 1;
pt(77).ncols     = 3;
pt(77).subsource = 'SS_DOUBLE';
pt(77).ndims     = '2';
pt(77).size      = '[]';
pt(77).isStruct  = false;
pt(77).symbol     = 'Wind_Turbine_P.Zerosequence_Value_d';
pt(77).baseaddr   = '&Wind_Turbine_P.Zerosequence_Value_d[0]';
pt(77).dtname     = 'real_T';



  
pt(78).blockname = 'Grid/Grid/Model/Seq B Generation/valp_nom2';
pt(78).paramname = 'Value';
pt(78).class     = 'scalar';
pt(78).nrows     = 1;
pt(78).ncols     = 1;
pt(78).subsource = 'SS_DOUBLE';
pt(78).ndims     = '2';
pt(78).size      = '[]';
pt(78).isStruct  = false;
pt(78).symbol     = 'Wind_Turbine_P.valp_nom2_Value_a';
pt(78).baseaddr   = '&Wind_Turbine_P.valp_nom2_Value_a';
pt(78).dtname     = 'real_T';



  
pt(79).blockname = 'Grid/Grid/Model/Seq B Generation/Gain3';
pt(79).paramname = 'Gain';
pt(79).class     = 'scalar';
pt(79).nrows     = 1;
pt(79).ncols     = 1;
pt(79).subsource = 'SS_DOUBLE';
pt(79).ndims     = '2';
pt(79).size      = '[]';
pt(79).isStruct  = false;
pt(79).symbol     = 'Wind_Turbine_P.Gain3_Gain_c';
pt(79).baseaddr   = '&Wind_Turbine_P.Gain3_Gain_c';
pt(79).dtname     = 'real_T';



  
pt(80).blockname = 'Grid/Grid/Model/Variation SubSystem/Constant';
pt(80).paramname = 'Value';
pt(80).class     = 'scalar';
pt(80).nrows     = 1;
pt(80).ncols     = 1;
pt(80).subsource = 'SS_DOUBLE';
pt(80).ndims     = '2';
pt(80).size      = '[]';
pt(80).isStruct  = false;
pt(80).symbol     = 'Wind_Turbine_P.Constant_Value_c';
pt(80).baseaddr   = '&Wind_Turbine_P.Constant_Value_c';
pt(80).dtname     = 'real_T';



  
pt(81).blockname = 'Grid/Grid/Model/Variation SubSystem/Constant1';
pt(81).paramname = 'Value';
pt(81).class     = 'scalar';
pt(81).nrows     = 1;
pt(81).ncols     = 1;
pt(81).subsource = 'SS_DOUBLE';
pt(81).ndims     = '2';
pt(81).size      = '[]';
pt(81).isStruct  = false;
pt(81).symbol     = 'Wind_Turbine_P.Constant1_Value_n';
pt(81).baseaddr   = '&Wind_Turbine_P.Constant1_Value_n';
pt(81).dtname     = 'real_T';



  
pt(82).blockname = 'Grid/Grid/Model/Variation SubSystem/Constant2';
pt(82).paramname = 'Value';
pt(82).class     = 'scalar';
pt(82).nrows     = 1;
pt(82).ncols     = 1;
pt(82).subsource = 'SS_DOUBLE';
pt(82).ndims     = '2';
pt(82).size      = '[]';
pt(82).isStruct  = false;
pt(82).symbol     = 'Wind_Turbine_P.Constant2_Value';
pt(82).baseaddr   = '&Wind_Turbine_P.Constant2_Value';
pt(82).dtname     = 'real_T';



  
pt(83).blockname = 'Grid/Grid/Model/Variation SubSystem/Constant3';
pt(83).paramname = 'Value';
pt(83).class     = 'scalar';
pt(83).nrows     = 1;
pt(83).ncols     = 1;
pt(83).subsource = 'SS_DOUBLE';
pt(83).ndims     = '2';
pt(83).size      = '[]';
pt(83).isStruct  = false;
pt(83).symbol     = 'Wind_Turbine_P.Constant3_Value';
pt(83).baseaddr   = '&Wind_Turbine_P.Constant3_Value';
pt(83).dtname     = 'real_T';



  
pt(84).blockname = 'Grid/Grid/Model/Variation SubSystem/Constant4';
pt(84).paramname = 'Value';
pt(84).class     = 'scalar';
pt(84).nrows     = 1;
pt(84).ncols     = 1;
pt(84).subsource = 'SS_DOUBLE';
pt(84).ndims     = '2';
pt(84).size      = '[]';
pt(84).isStruct  = false;
pt(84).symbol     = 'Wind_Turbine_P.Constant4_Value_f';
pt(84).baseaddr   = '&Wind_Turbine_P.Constant4_Value_f';
pt(84).dtname     = 'real_T';



  
pt(85).blockname = 'Grid/Grid/Model/Variation SubSystem/Constant5';
pt(85).paramname = 'Value';
pt(85).class     = 'scalar';
pt(85).nrows     = 1;
pt(85).ncols     = 1;
pt(85).subsource = 'SS_DOUBLE';
pt(85).ndims     = '2';
pt(85).size      = '[]';
pt(85).isStruct  = false;
pt(85).symbol     = 'Wind_Turbine_P.Constant5_Value';
pt(85).baseaddr   = '&Wind_Turbine_P.Constant5_Value';
pt(85).dtname     = 'real_T';



  
pt(86).blockname = 'Grid/Grid/Model/Variation SubSystem/Gain1';
pt(86).paramname = 'Gain';
pt(86).class     = 'scalar';
pt(86).nrows     = 1;
pt(86).ncols     = 1;
pt(86).subsource = 'SS_DOUBLE';
pt(86).ndims     = '2';
pt(86).size      = '[]';
pt(86).isStruct  = false;
pt(86).symbol     = 'Wind_Turbine_P.Gain1_Gain';
pt(86).baseaddr   = '&Wind_Turbine_P.Gain1_Gain';
pt(86).dtname     = 'real_T';



  
pt(87).blockname = 'Grid/Grid/Model/Variation SubSystem/Integrator';
pt(87).paramname = 'InitialCondition';
pt(87).class     = 'scalar';
pt(87).nrows     = 1;
pt(87).ncols     = 1;
pt(87).subsource = 'SS_DOUBLE';
pt(87).ndims     = '2';
pt(87).size      = '[]';
pt(87).isStruct  = false;
pt(87).symbol     = 'Wind_Turbine_P.Integrator_IC_g';
pt(87).baseaddr   = '&Wind_Turbine_P.Integrator_IC_g';
pt(87).dtname     = 'real_T';



  
pt(88).blockname = 'Grid/Grid/Model/Variation SubSystem/Memory';
pt(88).paramname = 'InitialCondition';
pt(88).class     = 'scalar';
pt(88).nrows     = 1;
pt(88).ncols     = 1;
pt(88).subsource = 'SS_DOUBLE';
pt(88).ndims     = '2';
pt(88).size      = '[]';
pt(88).isStruct  = false;
pt(88).symbol     = 'Wind_Turbine_P.Memory_InitialCondition';
pt(88).baseaddr   = '&Wind_Turbine_P.Memory_InitialCondition';
pt(88).dtname     = 'real_T';



  
pt(89).blockname = 'Grid/Grid/Model/Variation SubSystem/Step';
pt(89).paramname = 'Before';
pt(89).class     = 'scalar';
pt(89).nrows     = 1;
pt(89).ncols     = 1;
pt(89).subsource = 'SS_DOUBLE';
pt(89).ndims     = '2';
pt(89).size      = '[]';
pt(89).isStruct  = false;
pt(89).symbol     = 'Wind_Turbine_P.Step_Y0_e';
pt(89).baseaddr   = '&Wind_Turbine_P.Step_Y0_e';
pt(89).dtname     = 'real_T';



  
pt(90).blockname = 'Grid/Grid/Model/Variation SubSystem/Step';
pt(90).paramname = 'After';
pt(90).class     = 'scalar';
pt(90).nrows     = 1;
pt(90).ncols     = 1;
pt(90).subsource = 'SS_DOUBLE';
pt(90).ndims     = '2';
pt(90).size      = '[]';
pt(90).isStruct  = false;
pt(90).symbol     = 'Wind_Turbine_P.Step_YFinal_g';
pt(90).baseaddr   = '&Wind_Turbine_P.Step_YFinal_g';
pt(90).dtname     = 'real_T';



  
pt(91).blockname = 'Grid/Grid/Model/Variation SubSystem/Step1';
pt(91).paramname = 'Before';
pt(91).class     = 'scalar';
pt(91).nrows     = 1;
pt(91).ncols     = 1;
pt(91).subsource = 'SS_DOUBLE';
pt(91).ndims     = '2';
pt(91).size      = '[]';
pt(91).isStruct  = false;
pt(91).symbol     = 'Wind_Turbine_P.Step1_Y0';
pt(91).baseaddr   = '&Wind_Turbine_P.Step1_Y0';
pt(91).dtname     = 'real_T';



  
pt(92).blockname = 'Grid/Grid/Model/Variation SubSystem/Step1';
pt(92).paramname = 'After';
pt(92).class     = 'scalar';
pt(92).nrows     = 1;
pt(92).ncols     = 1;
pt(92).subsource = 'SS_DOUBLE';
pt(92).ndims     = '2';
pt(92).size      = '[]';
pt(92).isStruct  = false;
pt(92).symbol     = 'Wind_Turbine_P.Step1_YFinal';
pt(92).baseaddr   = '&Wind_Turbine_P.Step1_YFinal';
pt(92).dtname     = 'real_T';



  
pt(93).blockname = 'Grid/Grid/Model/Variation SubSystem/Switch';
pt(93).paramname = 'Threshold';
pt(93).class     = 'scalar';
pt(93).nrows     = 1;
pt(93).ncols     = 1;
pt(93).subsource = 'SS_DOUBLE';
pt(93).ndims     = '2';
pt(93).size      = '[]';
pt(93).isStruct  = false;
pt(93).symbol     = 'Wind_Turbine_P.Switch_Threshold_j';
pt(93).baseaddr   = '&Wind_Turbine_P.Switch_Threshold_j';
pt(93).dtname     = 'real_T';



  
pt(94).blockname = 'Grid/Grid/Model/Variation SubSystem/Switch2';
pt(94).paramname = 'Threshold';
pt(94).class     = 'scalar';
pt(94).nrows     = 1;
pt(94).ncols     = 1;
pt(94).subsource = 'SS_DOUBLE';
pt(94).ndims     = '2';
pt(94).size      = '[]';
pt(94).isStruct  = false;
pt(94).symbol     = 'Wind_Turbine_P.Switch2_Threshold_d';
pt(94).baseaddr   = '&Wind_Turbine_P.Switch2_Threshold_d';
pt(94).dtname     = 'real_T';



  
pt(95).blockname = 'Grid/mGrid/Model/U A:/do not delete this gain';
pt(95).paramname = 'Gain';
pt(95).class     = 'scalar';
pt(95).nrows     = 1;
pt(95).ncols     = 1;
pt(95).subsource = 'SS_DOUBLE';
pt(95).ndims     = '2';
pt(95).size      = '[]';
pt(95).isStruct  = false;
pt(95).symbol     = 'Wind_Turbine_P.donotdeletethisgain_Gain_f';
pt(95).baseaddr   = '&Wind_Turbine_P.donotdeletethisgain_Gain_f';
pt(95).dtname     = 'real_T';



  
pt(96).blockname = 'Grid/mGrid/Model/U B:/do not delete this gain';
pt(96).paramname = 'Gain';
pt(96).class     = 'scalar';
pt(96).nrows     = 1;
pt(96).ncols     = 1;
pt(96).subsource = 'SS_DOUBLE';
pt(96).ndims     = '2';
pt(96).size      = '[]';
pt(96).isStruct  = false;
pt(96).symbol     = 'Wind_Turbine_P.donotdeletethisgain_Gain_n';
pt(96).baseaddr   = '&Wind_Turbine_P.donotdeletethisgain_Gain_n';
pt(96).dtname     = 'real_T';



  
pt(97).blockname = 'Grid/mGrid/Model/U C:/do not delete this gain';
pt(97).paramname = 'Gain';
pt(97).class     = 'scalar';
pt(97).nrows     = 1;
pt(97).ncols     = 1;
pt(97).subsource = 'SS_DOUBLE';
pt(97).ndims     = '2';
pt(97).size      = '[]';
pt(97).isStruct  = false;
pt(97).symbol     = 'Wind_Turbine_P.donotdeletethisgain_Gain_b';
pt(97).baseaddr   = '&Wind_Turbine_P.donotdeletethisgain_Gain_b';
pt(97).dtname     = 'real_T';



  
pt(98).blockname = 'Nacelle/Generator/Full/B_Gen/Kv';
pt(98).paramname = 'Gain';
pt(98).class     = 'scalar';
pt(98).nrows     = 1;
pt(98).ncols     = 1;
pt(98).subsource = 'SS_DOUBLE';
pt(98).ndims     = '2';
pt(98).size      = '[]';
pt(98).isStruct  = false;
pt(98).symbol     = 'Wind_Turbine_P.Kv_Gain';
pt(98).baseaddr   = '&Wind_Turbine_P.Kv_Gain';
pt(98).dtname     = 'real_T';



  
pt(99).blockname = 'Nacelle/Generator/Full/B_Gen/Kv1';
pt(99).paramname = 'Gain';
pt(99).class     = 'scalar';
pt(99).nrows     = 1;
pt(99).ncols     = 1;
pt(99).subsource = 'SS_DOUBLE';
pt(99).ndims     = '2';
pt(99).size      = '[]';
pt(99).isStruct  = false;
pt(99).symbol     = 'Wind_Turbine_P.Kv1_Gain';
pt(99).baseaddr   = '&Wind_Turbine_P.Kv1_Gain';
pt(99).dtname     = 'real_T';



  
pt(100).blockname = 'Nacelle/Generator/Full/Trip Breaker1/C4';
pt(100).paramname = 'Value';
pt(100).class     = 'scalar';
pt(100).nrows     = 1;
pt(100).ncols     = 1;
pt(100).subsource = 'SS_DOUBLE';
pt(100).ndims     = '2';
pt(100).size      = '[]';
pt(100).isStruct  = false;
pt(100).symbol     = 'Wind_Turbine_P.C4_Value';
pt(100).baseaddr   = '&Wind_Turbine_P.C4_Value';
pt(100).dtname     = 'real_T';



  
pt(101).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Constant5';
pt(101).paramname = 'Value';
pt(101).class     = 'scalar';
pt(101).nrows     = 1;
pt(101).ncols     = 1;
pt(101).subsource = 'SS_DOUBLE';
pt(101).ndims     = '2';
pt(101).size      = '[]';
pt(101).isStruct  = false;
pt(101).symbol     = 'Wind_Turbine_P.Constant5_Value_d';
pt(101).baseaddr   = '&Wind_Turbine_P.Constant5_Value_d';
pt(101).dtname     = 'real_T';



  
pt(102).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Switch';
pt(102).paramname = 'Threshold';
pt(102).class     = 'scalar';
pt(102).nrows     = 1;
pt(102).ncols     = 1;
pt(102).subsource = 'SS_DOUBLE';
pt(102).ndims     = '2';
pt(102).size      = '[]';
pt(102).isStruct  = false;
pt(102).symbol     = 'Wind_Turbine_P.Switch_Threshold';
pt(102).baseaddr   = '&Wind_Turbine_P.Switch_Threshold';
pt(102).dtname     = 'real_T';



  
pt(103).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Switch1';
pt(103).paramname = 'Threshold';
pt(103).class     = 'scalar';
pt(103).nrows     = 1;
pt(103).ncols     = 1;
pt(103).subsource = 'SS_DOUBLE';
pt(103).ndims     = '2';
pt(103).size      = '[]';
pt(103).isStruct  = false;
pt(103).symbol     = 'Wind_Turbine_P.Switch1_Threshold';
pt(103).baseaddr   = '&Wind_Turbine_P.Switch1_Threshold';
pt(103).dtname     = 'real_T';



  
pt(104).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Switch2';
pt(104).paramname = 'Threshold';
pt(104).class     = 'scalar';
pt(104).nrows     = 1;
pt(104).ncols     = 1;
pt(104).subsource = 'SS_DOUBLE';
pt(104).ndims     = '2';
pt(104).size      = '[]';
pt(104).isStruct  = false;
pt(104).symbol     = 'Wind_Turbine_P.Switch2_Threshold';
pt(104).baseaddr   = '&Wind_Turbine_P.Switch2_Threshold';
pt(104).dtname     = 'real_T';



  
pt(105).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Switch3';
pt(105).paramname = 'Threshold';
pt(105).class     = 'scalar';
pt(105).nrows     = 1;
pt(105).ncols     = 1;
pt(105).subsource = 'SS_DOUBLE';
pt(105).ndims     = '2';
pt(105).size      = '[]';
pt(105).isStruct  = false;
pt(105).symbol     = 'Wind_Turbine_P.Switch3_Threshold';
pt(105).baseaddr   = '&Wind_Turbine_P.Switch3_Threshold';
pt(105).dtname     = 'real_T';



  
pt(106).blockname = 'Nacelle/Generator/Full/Trip Breaker2/C4';
pt(106).paramname = 'Value';
pt(106).class     = 'scalar';
pt(106).nrows     = 1;
pt(106).ncols     = 1;
pt(106).subsource = 'SS_DOUBLE';
pt(106).ndims     = '2';
pt(106).size      = '[]';
pt(106).isStruct  = false;
pt(106).symbol     = 'Wind_Turbine_P.C4_Value_i';
pt(106).baseaddr   = '&Wind_Turbine_P.C4_Value_i';
pt(106).dtname     = 'real_T';



  
pt(107).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Constant5';
pt(107).paramname = 'Value';
pt(107).class     = 'scalar';
pt(107).nrows     = 1;
pt(107).ncols     = 1;
pt(107).subsource = 'SS_DOUBLE';
pt(107).ndims     = '2';
pt(107).size      = '[]';
pt(107).isStruct  = false;
pt(107).symbol     = 'Wind_Turbine_P.Constant5_Value_db';
pt(107).baseaddr   = '&Wind_Turbine_P.Constant5_Value_db';
pt(107).dtname     = 'real_T';



  
pt(108).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Switch';
pt(108).paramname = 'Threshold';
pt(108).class     = 'scalar';
pt(108).nrows     = 1;
pt(108).ncols     = 1;
pt(108).subsource = 'SS_DOUBLE';
pt(108).ndims     = '2';
pt(108).size      = '[]';
pt(108).isStruct  = false;
pt(108).symbol     = 'Wind_Turbine_P.Switch_Threshold_c';
pt(108).baseaddr   = '&Wind_Turbine_P.Switch_Threshold_c';
pt(108).dtname     = 'real_T';



  
pt(109).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Switch1';
pt(109).paramname = 'Threshold';
pt(109).class     = 'scalar';
pt(109).nrows     = 1;
pt(109).ncols     = 1;
pt(109).subsource = 'SS_DOUBLE';
pt(109).ndims     = '2';
pt(109).size      = '[]';
pt(109).isStruct  = false;
pt(109).symbol     = 'Wind_Turbine_P.Switch1_Threshold_b';
pt(109).baseaddr   = '&Wind_Turbine_P.Switch1_Threshold_b';
pt(109).dtname     = 'real_T';



  
pt(110).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Switch2';
pt(110).paramname = 'Threshold';
pt(110).class     = 'scalar';
pt(110).nrows     = 1;
pt(110).ncols     = 1;
pt(110).subsource = 'SS_DOUBLE';
pt(110).ndims     = '2';
pt(110).size      = '[]';
pt(110).isStruct  = false;
pt(110).symbol     = 'Wind_Turbine_P.Switch2_Threshold_m';
pt(110).baseaddr   = '&Wind_Turbine_P.Switch2_Threshold_m';
pt(110).dtname     = 'real_T';



  
pt(111).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Switch3';
pt(111).paramname = 'Threshold';
pt(111).class     = 'scalar';
pt(111).nrows     = 1;
pt(111).ncols     = 1;
pt(111).subsource = 'SS_DOUBLE';
pt(111).ndims     = '2';
pt(111).size      = '[]';
pt(111).isStruct  = false;
pt(111).symbol     = 'Wind_Turbine_P.Switch3_Threshold_f';
pt(111).baseaddr   = '&Wind_Turbine_P.Switch3_Threshold_f';
pt(111).dtname     = 'real_T';



  
pt(112).blockname = 'Nacelle/Hub Axis/Rotate/Sensing/Gain';
pt(112).paramname = 'Gain';
pt(112).class     = 'scalar';
pt(112).nrows     = 1;
pt(112).ncols     = 1;
pt(112).subsource = 'SS_DOUBLE';
pt(112).ndims     = '2';
pt(112).size      = '[]';
pt(112).isStruct  = false;
pt(112).symbol     = 'Wind_Turbine_P.Gain_Gain';
pt(112).baseaddr   = '&Wind_Turbine_P.Gain_Gain';
pt(112).dtname     = 'real_T';



  
pt(113).blockname = 'Nacelle/Hub Axis/Rotate/Sensing/Gain1';
pt(113).paramname = 'Gain';
pt(113).class     = 'scalar';
pt(113).nrows     = 1;
pt(113).ncols     = 1;
pt(113).subsource = 'SS_DOUBLE';
pt(113).ndims     = '2';
pt(113).size      = '[]';
pt(113).isStruct  = false;
pt(113).symbol     = 'Wind_Turbine_P.Gain1_Gain_k';
pt(113).baseaddr   = '&Wind_Turbine_P.Gain1_Gain_k';
pt(113).dtname     = 'real_T';



  
pt(114).blockname = 'Nacelle/Pitch System/Hydraulic/Rev RB1/Gain';
pt(114).paramname = 'Gain';
pt(114).class     = 'scalar';
pt(114).nrows     = 1;
pt(114).ncols     = 1;
pt(114).subsource = 'SS_DOUBLE';
pt(114).ndims     = '2';
pt(114).size      = '[]';
pt(114).isStruct  = false;
pt(114).symbol     = 'Wind_Turbine_P.Gain_Gain_j';
pt(114).baseaddr   = '&Wind_Turbine_P.Gain_Gain_j';
pt(114).dtname     = 'real_T';



  
pt(115).blockname = 'Nacelle/Pitch System/Hydraulic/Rev RB2/Gain';
pt(115).paramname = 'Gain';
pt(115).class     = 'scalar';
pt(115).nrows     = 1;
pt(115).ncols     = 1;
pt(115).subsource = 'SS_DOUBLE';
pt(115).ndims     = '2';
pt(115).size      = '[]';
pt(115).isStruct  = false;
pt(115).symbol     = 'Wind_Turbine_P.Gain_Gain_n';
pt(115).baseaddr   = '&Wind_Turbine_P.Gain_Gain_n';
pt(115).dtname     = 'real_T';



  
pt(116).blockname = 'Nacelle/Pitch System/Hydraulic/Rev RB3/Gain';
pt(116).paramname = 'Gain';
pt(116).class     = 'scalar';
pt(116).nrows     = 1;
pt(116).ncols     = 1;
pt(116).subsource = 'SS_DOUBLE';
pt(116).ndims     = '2';
pt(116).size      = '[]';
pt(116).isStruct  = false;
pt(116).symbol     = 'Wind_Turbine_P.Gain_Gain_c';
pt(116).baseaddr   = '&Wind_Turbine_P.Gain_Gain_c';
pt(116).dtname     = 'real_T';



  
pt(117).blockname = 'Nacelle/Yaw System/Servomotor/Servomotor/Actuator Dynamics';
pt(117).paramname = 'x_initial';
pt(117).class     = 'scalar';
pt(117).nrows     = 1;
pt(117).ncols     = 1;
pt(117).subsource = 'SS_DOUBLE';
pt(117).ndims     = '2';
pt(117).size      = '[]';
pt(117).isStruct  = false;
pt(117).symbol     = 'Wind_Turbine_P.ActuatorDynamics_x_initial_of';
pt(117).baseaddr   = '&Wind_Turbine_P.ActuatorDynamics_x_initial_of';
pt(117).dtname     = 'real_T';



  
pt(118).blockname = 'Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/Lookup Fix';
pt(118).paramname = 'Gain';
pt(118).class     = 'scalar';
pt(118).nrows     = 1;
pt(118).ncols     = 1;
pt(118).subsource = 'SS_DOUBLE';
pt(118).ndims     = '2';
pt(118).size      = '[]';
pt(118).isStruct  = false;
pt(118).symbol     = 'Wind_Turbine_P.LookupFix_Gain';
pt(118).baseaddr   = '&Wind_Turbine_P.LookupFix_Gain';
pt(118).dtname     = 'real_T';



  
pt(119).blockname = 'Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/Angle to Extension';
pt(119).paramname = 'InputValues';
pt(119).class     = 'vector';
pt(119).nrows     = 88;
pt(119).ncols     = 1;
pt(119).subsource = 'SS_DOUBLE';
pt(119).ndims     = '2';
pt(119).size      = '[]';
pt(119).isStruct  = false;
pt(119).symbol     = 'Wind_Turbine_P.AngletoExtension_XData';
pt(119).baseaddr   = '&Wind_Turbine_P.AngletoExtension_XData[0]';
pt(119).dtname     = 'real_T';



  
pt(120).blockname = 'Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Limit Pitch Command';
pt(120).paramname = 'UpperLimit';
pt(120).class     = 'scalar';
pt(120).nrows     = 1;
pt(120).ncols     = 1;
pt(120).subsource = 'SS_DOUBLE';
pt(120).ndims     = '2';
pt(120).size      = '[]';
pt(120).isStruct  = false;
pt(120).symbol     = 'Wind_Turbine_P.LimitPitchCommand_UpperSat';
pt(120).baseaddr   = '&Wind_Turbine_P.LimitPitchCommand_UpperSat';
pt(120).dtname     = 'real_T';



  
pt(121).blockname = 'Scopes/Generator Scopes/pu to MW//MVar/3-Phase Active & Reactive Power (Phasor Type)/K';
pt(121).paramname = 'Gain';
pt(121).class     = 'scalar';
pt(121).nrows     = 1;
pt(121).ncols     = 1;
pt(121).subsource = 'SS_DOUBLE';
pt(121).ndims     = '2';
pt(121).size      = '[]';
pt(121).isStruct  = false;
pt(121).symbol     = 'Wind_Turbine_P.K_Gain';
pt(121).baseaddr   = '&Wind_Turbine_P.K_Gain';
pt(121).dtname     = 'real_T';



  
pt(122).blockname = 'Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/integrator';
pt(122).paramname = 'InitialCondition';
pt(122).class     = 'scalar';
pt(122).nrows     = 1;
pt(122).ncols     = 1;
pt(122).subsource = 'SS_DOUBLE';
pt(122).ndims     = '2';
pt(122).size      = '[]';
pt(122).isStruct  = false;
pt(122).symbol     = 'Wind_Turbine_P.integrator_IC';
pt(122).baseaddr   = '&Wind_Turbine_P.integrator_IC';
pt(122).dtname     = 'real_T';



  
pt(123).blockname = 'Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Step';
pt(123).paramname = 'Before';
pt(123).class     = 'scalar';
pt(123).nrows     = 1;
pt(123).ncols     = 1;
pt(123).subsource = 'SS_DOUBLE';
pt(123).ndims     = '2';
pt(123).size      = '[]';
pt(123).isStruct  = false;
pt(123).symbol     = 'Wind_Turbine_P.Step_Y0';
pt(123).baseaddr   = '&Wind_Turbine_P.Step_Y0';
pt(123).dtname     = 'real_T';



  
pt(124).blockname = 'Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Step';
pt(124).paramname = 'After';
pt(124).class     = 'scalar';
pt(124).nrows     = 1;
pt(124).ncols     = 1;
pt(124).subsource = 'SS_DOUBLE';
pt(124).ndims     = '2';
pt(124).size      = '[]';
pt(124).isStruct  = false;
pt(124).symbol     = 'Wind_Turbine_P.Step_YFinal';
pt(124).baseaddr   = '&Wind_Turbine_P.Step_YFinal';
pt(124).dtname     = 'real_T';



  
pt(125).blockname = 'Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Switch';
pt(125).paramname = 'Threshold';
pt(125).class     = 'scalar';
pt(125).nrows     = 1;
pt(125).ncols     = 1;
pt(125).subsource = 'SS_DOUBLE';
pt(125).ndims     = '2';
pt(125).size      = '[]';
pt(125).isStruct  = false;
pt(125).symbol     = 'Wind_Turbine_P.Switch_Threshold_k';
pt(125).baseaddr   = '&Wind_Turbine_P.Switch_Threshold_k';
pt(125).dtname     = 'real_T';



  
pt(126).blockname = 'Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Transport Delay';
pt(126).paramname = 'InitialOutput';
pt(126).class     = 'scalar';
pt(126).nrows     = 1;
pt(126).ncols     = 1;
pt(126).subsource = 'SS_DOUBLE';
pt(126).ndims     = '2';
pt(126).size      = '[]';
pt(126).isStruct  = false;
pt(126).symbol     = 'Wind_Turbine_P.TransportDelay_InitOutput';
pt(126).baseaddr   = '&Wind_Turbine_P.TransportDelay_InitOutput';
pt(126).dtname     = 'real_T';



  
pt(127).blockname = 'Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/integrator';
pt(127).paramname = 'InitialCondition';
pt(127).class     = 'scalar';
pt(127).nrows     = 1;
pt(127).ncols     = 1;
pt(127).subsource = 'SS_DOUBLE';
pt(127).ndims     = '2';
pt(127).size      = '[]';
pt(127).isStruct  = false;
pt(127).symbol     = 'Wind_Turbine_P.integrator_IC_j';
pt(127).baseaddr   = '&Wind_Turbine_P.integrator_IC_j';
pt(127).dtname     = 'real_T';



  
pt(128).blockname = 'Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Step';
pt(128).paramname = 'Before';
pt(128).class     = 'scalar';
pt(128).nrows     = 1;
pt(128).ncols     = 1;
pt(128).subsource = 'SS_DOUBLE';
pt(128).ndims     = '2';
pt(128).size      = '[]';
pt(128).isStruct  = false;
pt(128).symbol     = 'Wind_Turbine_P.Step_Y0_g';
pt(128).baseaddr   = '&Wind_Turbine_P.Step_Y0_g';
pt(128).dtname     = 'real_T';



  
pt(129).blockname = 'Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Step';
pt(129).paramname = 'After';
pt(129).class     = 'scalar';
pt(129).nrows     = 1;
pt(129).ncols     = 1;
pt(129).subsource = 'SS_DOUBLE';
pt(129).ndims     = '2';
pt(129).size      = '[]';
pt(129).isStruct  = false;
pt(129).symbol     = 'Wind_Turbine_P.Step_YFinal_h';
pt(129).baseaddr   = '&Wind_Turbine_P.Step_YFinal_h';
pt(129).dtname     = 'real_T';



  
pt(130).blockname = 'Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Switch';
pt(130).paramname = 'Threshold';
pt(130).class     = 'scalar';
pt(130).nrows     = 1;
pt(130).ncols     = 1;
pt(130).subsource = 'SS_DOUBLE';
pt(130).ndims     = '2';
pt(130).size      = '[]';
pt(130).isStruct  = false;
pt(130).symbol     = 'Wind_Turbine_P.Switch_Threshold_f';
pt(130).baseaddr   = '&Wind_Turbine_P.Switch_Threshold_f';
pt(130).dtname     = 'real_T';



  
pt(131).blockname = 'Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Transport Delay';
pt(131).paramname = 'InitialOutput';
pt(131).class     = 'scalar';
pt(131).nrows     = 1;
pt(131).ncols     = 1;
pt(131).subsource = 'SS_DOUBLE';
pt(131).ndims     = '2';
pt(131).size      = '[]';
pt(131).isStruct  = false;
pt(131).symbol     = 'Wind_Turbine_P.TransportDelay_InitOutput_e';
pt(131).baseaddr   = '&Wind_Turbine_P.TransportDelay_InitOutput_e';
pt(131).dtname     = 'real_T';



  
pt(132).blockname = 'Grid/Grid/Model/Stair Generator/Model/Hit  Crossing';
pt(132).paramname = 'HitCrossingOffset';
pt(132).class     = 'scalar';
pt(132).nrows     = 1;
pt(132).ncols     = 1;
pt(132).subsource = 'SS_DOUBLE';
pt(132).ndims     = '2';
pt(132).size      = '[]';
pt(132).isStruct  = false;
pt(132).symbol     = 'Wind_Turbine_P.HitCrossing_Offset';
pt(132).baseaddr   = '&Wind_Turbine_P.HitCrossing_Offset';
pt(132).dtname     = 'real_T';



  
pt(133).blockname = 'Grid/Grid/Model/Stair Generator/Model/Look-Up Table';
pt(133).paramname = 'InputValues';
pt(133).class     = 'vector';
pt(133).nrows     = 1;
pt(133).ncols     = 6;
pt(133).subsource = 'SS_DOUBLE';
pt(133).ndims     = '2';
pt(133).size      = '[]';
pt(133).isStruct  = false;
pt(133).symbol     = 'Wind_Turbine_P.LookUpTable_XData';
pt(133).baseaddr   = '&Wind_Turbine_P.LookUpTable_XData[0]';
pt(133).dtname     = 'real_T';



  
pt(134).blockname = 'Grid/Grid/Model/Stair Generator/Model/Look-Up Table';
pt(134).paramname = 'Table';
pt(134).class     = 'vector';
pt(134).nrows     = 1;
pt(134).ncols     = 6;
pt(134).subsource = 'SS_DOUBLE';
pt(134).ndims     = '2';
pt(134).size      = '[]';
pt(134).isStruct  = false;
pt(134).symbol     = 'Wind_Turbine_P.LookUpTable_YData';
pt(134).baseaddr   = '&Wind_Turbine_P.LookUpTable_YData[0]';
pt(134).dtname     = 'real_T';



  
pt(135).blockname = 'Nacelle/Geartrain/Ideal/Brakes/Signal to Pressure/Saturation';
pt(135).paramname = 'UpperLimit';
pt(135).class     = 'scalar';
pt(135).nrows     = 1;
pt(135).ncols     = 1;
pt(135).subsource = 'SS_DOUBLE';
pt(135).ndims     = '2';
pt(135).size      = '[]';
pt(135).isStruct  = false;
pt(135).symbol     = 'Wind_Turbine_P.Saturation_UpperSat';
pt(135).baseaddr   = '&Wind_Turbine_P.Saturation_UpperSat';
pt(135).dtname     = 'real_T';



  
pt(136).blockname = 'Nacelle/Geartrain/Ideal/Brakes/Signal to Pressure/Saturation';
pt(136).paramname = 'LowerLimit';
pt(136).class     = 'scalar';
pt(136).nrows     = 1;
pt(136).ncols     = 1;
pt(136).subsource = 'SS_DOUBLE';
pt(136).ndims     = '2';
pt(136).size      = '[]';
pt(136).isStruct  = false;
pt(136).symbol     = 'Wind_Turbine_P.Saturation_LowerSat_m';
pt(136).baseaddr   = '&Wind_Turbine_P.Saturation_LowerSat_m';
pt(136).dtname     = 'real_T';



  
pt(137).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Vqdr1';
pt(137).paramname = 'Value';
pt(137).class     = 'vector';
pt(137).nrows     = 1;
pt(137).ncols     = 2;
pt(137).subsource = 'SS_DOUBLE';
pt(137).ndims     = '2';
pt(137).size      = '[]';
pt(137).isStruct  = false;
pt(137).symbol     = 'Wind_Turbine_P.Vqdr1_Value';
pt(137).baseaddr   = '&Wind_Turbine_P.Vqdr1_Value[0]';
pt(137).dtname     = 'real_T';



  
pt(138).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Vqdr3';
pt(138).paramname = 'Value';
pt(138).class     = 'vector';
pt(138).nrows     = 1;
pt(138).ncols     = 2;
pt(138).subsource = 'SS_DOUBLE';
pt(138).ndims     = '2';
pt(138).size      = '[]';
pt(138).isStruct  = false;
pt(138).symbol     = 'Wind_Turbine_P.Vqdr3_Value';
pt(138).baseaddr   = '&Wind_Turbine_P.Vqdr3_Value[0]';
pt(138).dtname     = 'real_T';



  
pt(139).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/ws2';
pt(139).paramname = 'Value';
pt(139).class     = 'scalar';
pt(139).nrows     = 1;
pt(139).ncols     = 1;
pt(139).subsource = 'SS_DOUBLE';
pt(139).ndims     = '2';
pt(139).size      = '[]';
pt(139).isStruct  = false;
pt(139).symbol     = 'Wind_Turbine_P.ws2_Value';
pt(139).baseaddr   = '&Wind_Turbine_P.ws2_Value';
pt(139).dtname     = 'real_T';



  
pt(140).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/1_Vb';
pt(140).paramname = 'Gain';
pt(140).class     = 'scalar';
pt(140).nrows     = 1;
pt(140).ncols     = 1;
pt(140).subsource = 'SS_DOUBLE';
pt(140).ndims     = '2';
pt(140).size      = '[]';
pt(140).isStruct  = false;
pt(140).symbol     = 'Wind_Turbine_P.u_Vb_Gain';
pt(140).baseaddr   = '&Wind_Turbine_P.u_Vb_Gain';
pt(140).dtname     = 'real_T';



  
pt(141).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Gain';
pt(141).paramname = 'Gain';
pt(141).class     = 'vector';
pt(141).nrows     = 19;
pt(141).ncols     = 1;
pt(141).subsource = 'SS_DOUBLE';
pt(141).ndims     = '2';
pt(141).size      = '[]';
pt(141).isStruct  = false;
pt(141).symbol     = 'Wind_Turbine_P.Gain_Gain_d';
pt(141).baseaddr   = '&Wind_Turbine_P.Gain_Gain_d[0]';
pt(141).dtname     = 'real_T';



  
pt(142).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/ib';
pt(142).paramname = 'Gain';
pt(142).class     = 'scalar';
pt(142).nrows     = 1;
pt(142).ncols     = 1;
pt(142).subsource = 'SS_DOUBLE';
pt(142).ndims     = '2';
pt(142).size      = '[]';
pt(142).isStruct  = false;
pt(142).symbol     = 'Wind_Turbine_P.ib_Gain';
pt(142).baseaddr   = '&Wind_Turbine_P.ib_Gain';
pt(142).dtname     = 'real_T';



  
pt(143).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/1\p';
pt(143).paramname = 'Gain';
pt(143).class     = 'scalar';
pt(143).nrows     = 1;
pt(143).ncols     = 1;
pt(143).subsource = 'SS_DOUBLE';
pt(143).ndims     = '2';
pt(143).size      = '[]';
pt(143).isStruct  = false;
pt(143).symbol     = 'Wind_Turbine_P.up_Gain';
pt(143).baseaddr   = '&Wind_Turbine_P.up_Gain';
pt(143).dtname     = 'real_T';



  
pt(144).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/Gain';
pt(144).paramname = 'Gain';
pt(144).class     = 'vector';
pt(144).nrows     = 3;
pt(144).ncols     = 1;
pt(144).subsource = 'SS_DOUBLE';
pt(144).ndims     = '2';
pt(144).size      = '[]';
pt(144).isStruct  = false;
pt(144).symbol     = 'Wind_Turbine_P.Gain_Gain_k';
pt(144).baseaddr   = '&Wind_Turbine_P.Gain_Gain_k[0]';
pt(144).dtname     = 'real_T';



  
pt(145).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/web_psb';
pt(145).paramname = 'Gain';
pt(145).class     = 'scalar';
pt(145).nrows     = 1;
pt(145).ncols     = 1;
pt(145).subsource = 'SS_DOUBLE';
pt(145).ndims     = '2';
pt(145).size      = '[]';
pt(145).isStruct  = false;
pt(145).symbol     = 'Wind_Turbine_P.web_psb_Gain';
pt(145).baseaddr   = '&Wind_Turbine_P.web_psb_Gain';
pt(145).dtname     = 'real_T';



  
pt(146).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/web_psb1';
pt(146).paramname = 'Gain';
pt(146).class     = 'scalar';
pt(146).nrows     = 1;
pt(146).ncols     = 1;
pt(146).subsource = 'SS_DOUBLE';
pt(146).ndims     = '2';
pt(146).size      = '[]';
pt(146).isStruct  = false;
pt(146).symbol     = 'Wind_Turbine_P.web_psb1_Gain';
pt(146).baseaddr   = '&Wind_Turbine_P.web_psb1_Gain';
pt(146).dtname     = 'real_T';



  
pt(147).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/Rotor angle thetam';
pt(147).paramname = 'InitialCondition';
pt(147).class     = 'scalar';
pt(147).nrows     = 1;
pt(147).ncols     = 1;
pt(147).subsource = 'SS_DOUBLE';
pt(147).ndims     = '2';
pt(147).size      = '[]';
pt(147).isStruct  = false;
pt(147).symbol     = 'Wind_Turbine_P.Rotoranglethetam_IC';
pt(147).baseaddr   = '&Wind_Turbine_P.Rotoranglethetam_IC';
pt(147).dtname     = 'real_T';



  
pt(148).blockname = 'Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/PI Controller/Integrator';
pt(148).paramname = 'InitialCondition';
pt(148).class     = 'scalar';
pt(148).nrows     = 1;
pt(148).ncols     = 1;
pt(148).subsource = 'SS_DOUBLE';
pt(148).ndims     = '2';
pt(148).size      = '[]';
pt(148).isStruct  = false;
pt(148).symbol     = 'Wind_Turbine_P.Integrator_IC_p';
pt(148).baseaddr   = '&Wind_Turbine_P.Integrator_IC_p';
pt(148).dtname     = 'real_T';



  
pt(149).blockname = 'Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Angle of Attack if Pitch Angle Were 0/rad2deg';
pt(149).paramname = 'Gain';
pt(149).class     = 'scalar';
pt(149).nrows     = 1;
pt(149).ncols     = 1;
pt(149).subsource = 'SS_DOUBLE';
pt(149).ndims     = '2';
pt(149).size      = '[]';
pt(149).isStruct  = false;
pt(149).symbol     = 'Wind_Turbine_P.rad2deg_Gain';
pt(149).baseaddr   = '&Wind_Turbine_P.rad2deg_Gain';
pt(149).dtname     = 'real_T';



  
pt(150).blockname = 'Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/Saturation';
pt(150).paramname = 'LowerLimit';
pt(150).class     = 'scalar';
pt(150).nrows     = 1;
pt(150).ncols     = 1;
pt(150).subsource = 'SS_DOUBLE';
pt(150).ndims     = '2';
pt(150).size      = '[]';
pt(150).isStruct  = false;
pt(150).symbol     = 'Wind_Turbine_P.Saturation_LowerSat';
pt(150).baseaddr   = '&Wind_Turbine_P.Saturation_LowerSat';
pt(150).dtname     = 'real_T';



  
pt(151).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Matrix W Synchronous Ref. Frame /u3';
pt(151).paramname = 'Value';
pt(151).class     = 'col-mat';
pt(151).nrows     = 4;
pt(151).ncols     = 4;
pt(151).subsource = 'SS_DOUBLE';
pt(151).ndims     = '2';
pt(151).size      = '[]';
pt(151).isStruct  = false;
pt(151).symbol     = 'Wind_Turbine_P.u3_Value';
pt(151).baseaddr   = '&Wind_Turbine_P.u3_Value[0]';
pt(151).dtname     = 'real_T';



  
pt(152).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Matrix W Synchronous Ref. Frame /we';
pt(152).paramname = 'Value';
pt(152).class     = 'scalar';
pt(152).nrows     = 1;
pt(152).ncols     = 1;
pt(152).subsource = 'SS_DOUBLE';
pt(152).ndims     = '2';
pt(152).size      = '[]';
pt(152).isStruct  = false;
pt(152).symbol     = 'Wind_Turbine_P.we_Value';
pt(152).baseaddr   = '&Wind_Turbine_P.we_Value';
pt(152).dtname     = 'real_T';



  
pt(153).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Matrix W Synchronous Ref. Frame /Gain2';
pt(153).paramname = 'Gain';
pt(153).class     = 'scalar';
pt(153).nrows     = 1;
pt(153).ncols     = 1;
pt(153).subsource = 'SS_DOUBLE';
pt(153).ndims     = '2';
pt(153).size      = '[]';
pt(153).isStruct  = false;
pt(153).symbol     = 'Wind_Turbine_P.Gain2_Gain';
pt(153).baseaddr   = '&Wind_Turbine_P.Gain2_Gain';
pt(153).dtname     = 'real_T';



  
pt(154).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/(a^2)//3';
pt(154).paramname = 'Gain';
pt(154).class     = 'scalar';
pt(154).nrows     = 1;
pt(154).ncols     = 1;
pt(154).subsource = 'SS_DOUBLE';
pt(154).ndims     = '2';
pt(154).size      = '[]';
pt(154).isStruct  = true;
pt(154).symbol     = 'Wind_Turbine_P.a23_Gain';
pt(154).baseaddr   = '&Wind_Turbine_P.a23_Gain.re';
pt(154).dtname     = 'real_T';



  
pt(155).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Gain';
pt(155).paramname = 'Gain';
pt(155).class     = 'scalar';
pt(155).nrows     = 1;
pt(155).ncols     = 1;
pt(155).subsource = 'SS_DOUBLE';
pt(155).ndims     = '2';
pt(155).size      = '[]';
pt(155).isStruct  = false;
pt(155).symbol     = 'Wind_Turbine_P.Gain_Gain_h';
pt(155).baseaddr   = '&Wind_Turbine_P.Gain_Gain_h';
pt(155).dtname     = 'real_T';



  
pt(156).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Gain1';
pt(156).paramname = 'Gain';
pt(156).class     = 'scalar';
pt(156).nrows     = 1;
pt(156).ncols     = 1;
pt(156).subsource = 'SS_DOUBLE';
pt(156).ndims     = '2';
pt(156).size      = '[]';
pt(156).isStruct  = false;
pt(156).symbol     = 'Wind_Turbine_P.Gain1_Gain_l';
pt(156).baseaddr   = '&Wind_Turbine_P.Gain1_Gain_l';
pt(156).dtname     = 'real_T';



  
pt(157).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/a//3';
pt(157).paramname = 'Gain';
pt(157).class     = 'scalar';
pt(157).nrows     = 1;
pt(157).ncols     = 1;
pt(157).subsource = 'SS_DOUBLE';
pt(157).ndims     = '2';
pt(157).size      = '[]';
pt(157).isStruct  = true;
pt(157).symbol     = 'Wind_Turbine_P.a3_Gain';
pt(157).baseaddr   = '&Wind_Turbine_P.a3_Gain.re';
pt(157).dtname     = 'real_T';



  
pt(158).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Constant';
pt(158).paramname = 'Value';
pt(158).class     = 'scalar';
pt(158).nrows     = 1;
pt(158).ncols     = 1;
pt(158).subsource = 'SS_DOUBLE';
pt(158).ndims     = '2';
pt(158).size      = '[]';
pt(158).isStruct  = false;
pt(158).symbol     = 'Wind_Turbine_P.Constant_Value';
pt(158).baseaddr   = '&Wind_Turbine_P.Constant_Value';
pt(158).dtname     = 'real_T';



  
pt(159).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Constant1';
pt(159).paramname = 'Value';
pt(159).class     = 'scalar';
pt(159).nrows     = 1;
pt(159).ncols     = 1;
pt(159).subsource = 'SS_DOUBLE';
pt(159).ndims     = '2';
pt(159).size      = '[]';
pt(159).isStruct  = false;
pt(159).symbol     = 'Wind_Turbine_P.Constant1_Value_h';
pt(159).baseaddr   = '&Wind_Turbine_P.Constant1_Value_h';
pt(159).dtname     = 'real_T';



  
pt(160).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Constant2';
pt(160).paramname = 'Value';
pt(160).class     = 'col-mat';
pt(160).nrows     = 4;
pt(160).ncols     = 4;
pt(160).subsource = 'SS_DOUBLE';
pt(160).ndims     = '2';
pt(160).size      = '[]';
pt(160).isStruct  = false;
pt(160).symbol     = 'Wind_Turbine_P.Constant2_Value_j';
pt(160).baseaddr   = '&Wind_Turbine_P.Constant2_Value_j[0]';
pt(160).dtname     = 'real_T';



  
pt(161).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Constant3';
pt(161).paramname = 'Value';
pt(161).class     = 'scalar';
pt(161).nrows     = 1;
pt(161).ncols     = 1;
pt(161).subsource = 'SS_DOUBLE';
pt(161).ndims     = '2';
pt(161).size      = '[]';
pt(161).isStruct  = false;
pt(161).symbol     = 'Wind_Turbine_P.Constant3_Value_b';
pt(161).baseaddr   = '&Wind_Turbine_P.Constant3_Value_b';
pt(161).dtname     = 'real_T';



  
pt(162).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Constant4';
pt(162).paramname = 'Value';
pt(162).class     = 'col-mat';
pt(162).nrows     = 4;
pt(162).ncols     = 4;
pt(162).subsource = 'SS_DOUBLE';
pt(162).ndims     = '2';
pt(162).size      = '[]';
pt(162).isStruct  = false;
pt(162).symbol     = 'Wind_Turbine_P.Constant4_Value_b';
pt(162).baseaddr   = '&Wind_Turbine_P.Constant4_Value_b[0]';
pt(162).dtname     = 'real_T';



  
pt(163).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Constant5';
pt(163).paramname = 'Value';
pt(163).class     = 'scalar';
pt(163).nrows     = 1;
pt(163).ncols     = 1;
pt(163).subsource = 'SS_DOUBLE';
pt(163).ndims     = '2';
pt(163).size      = '[]';
pt(163).isStruct  = false;
pt(163).symbol     = 'Wind_Turbine_P.Constant5_Value_a';
pt(163).baseaddr   = '&Wind_Turbine_P.Constant5_Value_a';
pt(163).dtname     = 'real_T';



  
pt(164).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Lm_nosat';
pt(164).paramname = 'Value';
pt(164).class     = 'scalar';
pt(164).nrows     = 1;
pt(164).ncols     = 1;
pt(164).subsource = 'SS_DOUBLE';
pt(164).ndims     = '2';
pt(164).size      = '[]';
pt(164).isStruct  = false;
pt(164).symbol     = 'Wind_Turbine_P.Lm_nosat_Value';
pt(164).baseaddr   = '&Wind_Turbine_P.Lm_nosat_Value';
pt(164).dtname     = 'real_T';



  
pt(165).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Switch';
pt(165).paramname = 'Threshold';
pt(165).class     = 'scalar';
pt(165).nrows     = 1;
pt(165).ncols     = 1;
pt(165).subsource = 'SS_DOUBLE';
pt(165).ndims     = '2';
pt(165).size      = '[]';
pt(165).isStruct  = false;
pt(165).symbol     = 'Wind_Turbine_P.Switch_Threshold_o';
pt(165).baseaddr   = '&Wind_Turbine_P.Switch_Threshold_o';
pt(165).dtname     = 'real_T';



  
pt(166).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Switch1';
pt(166).paramname = 'Threshold';
pt(166).class     = 'scalar';
pt(166).nrows     = 1;
pt(166).ncols     = 1;
pt(166).subsource = 'SS_DOUBLE';
pt(166).ndims     = '2';
pt(166).size      = '[]';
pt(166).isStruct  = false;
pt(166).symbol     = 'Wind_Turbine_P.Switch1_Threshold_i';
pt(166).baseaddr   = '&Wind_Turbine_P.Switch1_Threshold_i';
pt(166).dtname     = 'real_T';



  
pt(167).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Switch2';
pt(167).paramname = 'Threshold';
pt(167).class     = 'scalar';
pt(167).nrows     = 1;
pt(167).ncols     = 1;
pt(167).subsource = 'SS_DOUBLE';
pt(167).ndims     = '2';
pt(167).size      = '[]';
pt(167).isStruct  = false;
pt(167).symbol     = 'Wind_Turbine_P.Switch2_Threshold_h';
pt(167).baseaddr   = '&Wind_Turbine_P.Switch2_Threshold_h';
pt(167).dtname     = 'real_T';



  
pt(168).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/-pi//2  phase shift';
pt(168).paramname = 'Gain';
pt(168).class     = 'scalar';
pt(168).nrows     = 1;
pt(168).ncols     = 1;
pt(168).subsource = 'SS_DOUBLE';
pt(168).ndims     = '2';
pt(168).size      = '[]';
pt(168).isStruct  = true;
pt(168).symbol     = 'Wind_Turbine_P.pi2phaseshift_Gain';
pt(168).baseaddr   = '&Wind_Turbine_P.pi2phaseshift_Gain.re';
pt(168).dtname     = 'real_T';



  
pt(169).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Gain1';
pt(169).paramname = 'Gain';
pt(169).class     = 'scalar';
pt(169).nrows     = 1;
pt(169).ncols     = 1;
pt(169).subsource = 'SS_DOUBLE';
pt(169).ndims     = '2';
pt(169).size      = '[]';
pt(169).isStruct  = false;
pt(169).symbol     = 'Wind_Turbine_P.Gain1_Gain_h';
pt(169).baseaddr   = '&Wind_Turbine_P.Gain1_Gain_h';
pt(169).dtname     = 'real_T';



  
pt(170).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Gain2';
pt(170).paramname = 'Gain';
pt(170).class     = 'scalar';
pt(170).nrows     = 1;
pt(170).ncols     = 1;
pt(170).subsource = 'SS_DOUBLE';
pt(170).ndims     = '2';
pt(170).size      = '[]';
pt(170).isStruct  = false;
pt(170).symbol     = 'Wind_Turbine_P.Gain2_Gain_i';
pt(170).baseaddr   = '&Wind_Turbine_P.Gain2_Gain_i';
pt(170).dtname     = 'real_T';



  
pt(171).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Gain3';
pt(171).paramname = 'Gain';
pt(171).class     = 'vector';
pt(171).nrows     = 1;
pt(171).ncols     = 2;
pt(171).subsource = 'SS_DOUBLE';
pt(171).ndims     = '2';
pt(171).size      = '[]';
pt(171).isStruct  = false;
pt(171).symbol     = 'Wind_Turbine_P.Gain3_Gain_j';
pt(171).baseaddr   = '&Wind_Turbine_P.Gain3_Gain_j[0]';
pt(171).dtname     = 'real_T';



  
pt(172).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Gain4';
pt(172).paramname = 'Gain';
pt(172).class     = 'scalar';
pt(172).nrows     = 1;
pt(172).ncols     = 1;
pt(172).subsource = 'SS_DOUBLE';
pt(172).ndims     = '2';
pt(172).size      = '[]';
pt(172).isStruct  = false;
pt(172).symbol     = 'Wind_Turbine_P.Gain4_Gain_k';
pt(172).baseaddr   = '&Wind_Turbine_P.Gain4_Gain_k';
pt(172).dtname     = 'real_T';



  
pt(173).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Integrator';
pt(173).paramname = 'InitialCondition';
pt(173).class     = 'vector';
pt(173).nrows     = 1;
pt(173).ncols     = 2;
pt(173).subsource = 'SS_DOUBLE';
pt(173).ndims     = '2';
pt(173).size      = '[]';
pt(173).isStruct  = false;
pt(173).symbol     = 'Wind_Turbine_P.Integrator_IC_a';
pt(173).baseaddr   = '&Wind_Turbine_P.Integrator_IC_a[0]';
pt(173).dtname     = 'real_T';



  
pt(174).blockname = 'Nacelle/Generator/Full/B_Gen/Model/I A:/do not delete this gain';
pt(174).paramname = 'Gain';
pt(174).class     = 'scalar';
pt(174).nrows     = 1;
pt(174).ncols     = 1;
pt(174).subsource = 'SS_DOUBLE';
pt(174).ndims     = '2';
pt(174).size      = '[]';
pt(174).isStruct  = false;
pt(174).symbol     = 'Wind_Turbine_P.donotdeletethisgain_Gain_c';
pt(174).baseaddr   = '&Wind_Turbine_P.donotdeletethisgain_Gain_c';
pt(174).dtname     = 'real_T';



  
pt(175).blockname = 'Nacelle/Generator/Full/B_Gen/Model/I B:/do not delete this gain';
pt(175).paramname = 'Gain';
pt(175).class     = 'scalar';
pt(175).nrows     = 1;
pt(175).ncols     = 1;
pt(175).subsource = 'SS_DOUBLE';
pt(175).ndims     = '2';
pt(175).size      = '[]';
pt(175).isStruct  = false;
pt(175).symbol     = 'Wind_Turbine_P.donotdeletethisgain_Gain_j';
pt(175).baseaddr   = '&Wind_Turbine_P.donotdeletethisgain_Gain_j';
pt(175).dtname     = 'real_T';



  
pt(176).blockname = 'Nacelle/Generator/Full/B_Gen/Model/I C:/do not delete this gain';
pt(176).paramname = 'Gain';
pt(176).class     = 'scalar';
pt(176).nrows     = 1;
pt(176).ncols     = 1;
pt(176).subsource = 'SS_DOUBLE';
pt(176).ndims     = '2';
pt(176).size      = '[]';
pt(176).isStruct  = false;
pt(176).symbol     = 'Wind_Turbine_P.donotdeletethisgain_Gain_a';
pt(176).baseaddr   = '&Wind_Turbine_P.donotdeletethisgain_Gain_a';
pt(176).dtname     = 'real_T';



  
pt(177).blockname = 'Nacelle/Generator/Full/B_Gen/Model/U A:/do not delete this gain';
pt(177).paramname = 'Gain';
pt(177).class     = 'scalar';
pt(177).nrows     = 1;
pt(177).ncols     = 1;
pt(177).subsource = 'SS_DOUBLE';
pt(177).ndims     = '2';
pt(177).size      = '[]';
pt(177).isStruct  = false;
pt(177).symbol     = 'Wind_Turbine_P.donotdeletethisgain_Gain';
pt(177).baseaddr   = '&Wind_Turbine_P.donotdeletethisgain_Gain';
pt(177).dtname     = 'real_T';



  
pt(178).blockname = 'Nacelle/Generator/Full/B_Gen/Model/U B:/do not delete this gain';
pt(178).paramname = 'Gain';
pt(178).class     = 'scalar';
pt(178).nrows     = 1;
pt(178).ncols     = 1;
pt(178).subsource = 'SS_DOUBLE';
pt(178).ndims     = '2';
pt(178).size      = '[]';
pt(178).isStruct  = false;
pt(178).symbol     = 'Wind_Turbine_P.donotdeletethisgain_Gain_o';
pt(178).baseaddr   = '&Wind_Turbine_P.donotdeletethisgain_Gain_o';
pt(178).dtname     = 'real_T';



  
pt(179).blockname = 'Nacelle/Generator/Full/B_Gen/Model/U C:/do not delete this gain';
pt(179).paramname = 'Gain';
pt(179).class     = 'scalar';
pt(179).nrows     = 1;
pt(179).ncols     = 1;
pt(179).subsource = 'SS_DOUBLE';
pt(179).ndims     = '2';
pt(179).size      = '[]';
pt(179).isStruct  = false;
pt(179).symbol     = 'Wind_Turbine_P.donotdeletethisgain_Gain_l';
pt(179).baseaddr   = '&Wind_Turbine_P.donotdeletethisgain_Gain_l';
pt(179).dtname     = 'real_T';



  
pt(180).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/C4';
pt(180).paramname = 'Value';
pt(180).class     = 'scalar';
pt(180).nrows     = 1;
pt(180).ncols     = 1;
pt(180).subsource = 'SS_DOUBLE';
pt(180).ndims     = '2';
pt(180).size      = '[]';
pt(180).isStruct  = false;
pt(180).symbol     = 'Wind_Turbine_P.C4_Value_g';
pt(180).baseaddr   = '&Wind_Turbine_P.C4_Value_g';
pt(180).dtname     = 'real_T';



  
pt(181).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Switch3';
pt(181).paramname = 'Threshold';
pt(181).class     = 'scalar';
pt(181).nrows     = 1;
pt(181).ncols     = 1;
pt(181).subsource = 'SS_DOUBLE';
pt(181).ndims     = '2';
pt(181).size      = '[]';
pt(181).isStruct  = false;
pt(181).symbol     = 'Wind_Turbine_P.Switch3_Threshold_n';
pt(181).baseaddr   = '&Wind_Turbine_P.Switch3_Threshold_n';
pt(181).dtname     = 'real_T';



  
pt(182).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/C4';
pt(182).paramname = 'Value';
pt(182).class     = 'scalar';
pt(182).nrows     = 1;
pt(182).ncols     = 1;
pt(182).subsource = 'SS_DOUBLE';
pt(182).ndims     = '2';
pt(182).size      = '[]';
pt(182).isStruct  = false;
pt(182).symbol     = 'Wind_Turbine_P.C4_Value_m';
pt(182).baseaddr   = '&Wind_Turbine_P.C4_Value_m';
pt(182).dtname     = 'real_T';



  
pt(183).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Switch3';
pt(183).paramname = 'Threshold';
pt(183).class     = 'scalar';
pt(183).nrows     = 1;
pt(183).ncols     = 1;
pt(183).subsource = 'SS_DOUBLE';
pt(183).ndims     = '2';
pt(183).size      = '[]';
pt(183).isStruct  = false;
pt(183).symbol     = 'Wind_Turbine_P.Switch3_Threshold_i';
pt(183).baseaddr   = '&Wind_Turbine_P.Switch3_Threshold_i';
pt(183).dtname     = 'real_T';



  
pt(184).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/C4';
pt(184).paramname = 'Value';
pt(184).class     = 'scalar';
pt(184).nrows     = 1;
pt(184).ncols     = 1;
pt(184).subsource = 'SS_DOUBLE';
pt(184).ndims     = '2';
pt(184).size      = '[]';
pt(184).isStruct  = false;
pt(184).symbol     = 'Wind_Turbine_P.C4_Value_o';
pt(184).baseaddr   = '&Wind_Turbine_P.C4_Value_o';
pt(184).dtname     = 'real_T';



  
pt(185).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Switch3';
pt(185).paramname = 'Threshold';
pt(185).class     = 'scalar';
pt(185).nrows     = 1;
pt(185).ncols     = 1;
pt(185).subsource = 'SS_DOUBLE';
pt(185).ndims     = '2';
pt(185).size      = '[]';
pt(185).isStruct  = false;
pt(185).symbol     = 'Wind_Turbine_P.Switch3_Threshold_o';
pt(185).baseaddr   = '&Wind_Turbine_P.Switch3_Threshold_o';
pt(185).dtname     = 'real_T';



  
pt(186).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Stair Generator/Model/Hit  Crossing';
pt(186).paramname = 'HitCrossingOffset';
pt(186).class     = 'scalar';
pt(186).nrows     = 1;
pt(186).ncols     = 1;
pt(186).subsource = 'SS_DOUBLE';
pt(186).ndims     = '2';
pt(186).size      = '[]';
pt(186).isStruct  = false;
pt(186).symbol     = 'Wind_Turbine_P.HitCrossing_Offset_h';
pt(186).baseaddr   = '&Wind_Turbine_P.HitCrossing_Offset_h';
pt(186).dtname     = 'real_T';



  
pt(187).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Stair Generator/Model/Look-Up Table';
pt(187).paramname = 'InputValues';
pt(187).class     = 'vector';
pt(187).nrows     = 1;
pt(187).ncols     = 4;
pt(187).subsource = 'SS_DOUBLE';
pt(187).ndims     = '2';
pt(187).size      = '[]';
pt(187).isStruct  = false;
pt(187).symbol     = 'Wind_Turbine_P.LookUpTable_XData_p';
pt(187).baseaddr   = '&Wind_Turbine_P.LookUpTable_XData_p[0]';
pt(187).dtname     = 'real_T';



  
pt(188).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Stair Generator/Model/Look-Up Table';
pt(188).paramname = 'Table';
pt(188).class     = 'vector';
pt(188).nrows     = 1;
pt(188).ncols     = 4;
pt(188).subsource = 'SS_DOUBLE';
pt(188).ndims     = '2';
pt(188).size      = '[]';
pt(188).isStruct  = false;
pt(188).symbol     = 'Wind_Turbine_P.LookUpTable_YData_l';
pt(188).baseaddr   = '&Wind_Turbine_P.LookUpTable_YData_l[0]';
pt(188).dtname     = 'real_T';



  
pt(189).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/C4';
pt(189).paramname = 'Value';
pt(189).class     = 'scalar';
pt(189).nrows     = 1;
pt(189).ncols     = 1;
pt(189).subsource = 'SS_DOUBLE';
pt(189).ndims     = '2';
pt(189).size      = '[]';
pt(189).isStruct  = false;
pt(189).symbol     = 'Wind_Turbine_P.C4_Value_d';
pt(189).baseaddr   = '&Wind_Turbine_P.C4_Value_d';
pt(189).dtname     = 'real_T';



  
pt(190).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Switch3';
pt(190).paramname = 'Threshold';
pt(190).class     = 'scalar';
pt(190).nrows     = 1;
pt(190).ncols     = 1;
pt(190).subsource = 'SS_DOUBLE';
pt(190).ndims     = '2';
pt(190).size      = '[]';
pt(190).isStruct  = false;
pt(190).symbol     = 'Wind_Turbine_P.Switch3_Threshold_it';
pt(190).baseaddr   = '&Wind_Turbine_P.Switch3_Threshold_it';
pt(190).dtname     = 'real_T';



  
pt(191).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/C4';
pt(191).paramname = 'Value';
pt(191).class     = 'scalar';
pt(191).nrows     = 1;
pt(191).ncols     = 1;
pt(191).subsource = 'SS_DOUBLE';
pt(191).ndims     = '2';
pt(191).size      = '[]';
pt(191).isStruct  = false;
pt(191).symbol     = 'Wind_Turbine_P.C4_Value_ok';
pt(191).baseaddr   = '&Wind_Turbine_P.C4_Value_ok';
pt(191).dtname     = 'real_T';



  
pt(192).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Switch3';
pt(192).paramname = 'Threshold';
pt(192).class     = 'scalar';
pt(192).nrows     = 1;
pt(192).ncols     = 1;
pt(192).subsource = 'SS_DOUBLE';
pt(192).ndims     = '2';
pt(192).size      = '[]';
pt(192).isStruct  = false;
pt(192).symbol     = 'Wind_Turbine_P.Switch3_Threshold_h';
pt(192).baseaddr   = '&Wind_Turbine_P.Switch3_Threshold_h';
pt(192).dtname     = 'real_T';



  
pt(193).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/C4';
pt(193).paramname = 'Value';
pt(193).class     = 'scalar';
pt(193).nrows     = 1;
pt(193).ncols     = 1;
pt(193).subsource = 'SS_DOUBLE';
pt(193).ndims     = '2';
pt(193).size      = '[]';
pt(193).isStruct  = false;
pt(193).symbol     = 'Wind_Turbine_P.C4_Value_k';
pt(193).baseaddr   = '&Wind_Turbine_P.C4_Value_k';
pt(193).dtname     = 'real_T';



  
pt(194).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Switch3';
pt(194).paramname = 'Threshold';
pt(194).class     = 'scalar';
pt(194).nrows     = 1;
pt(194).ncols     = 1;
pt(194).subsource = 'SS_DOUBLE';
pt(194).ndims     = '2';
pt(194).size      = '[]';
pt(194).isStruct  = false;
pt(194).symbol     = 'Wind_Turbine_P.Switch3_Threshold_hg';
pt(194).baseaddr   = '&Wind_Turbine_P.Switch3_Threshold_hg';
pt(194).dtname     = 'real_T';



  
pt(195).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Stair Generator/Model/Hit  Crossing';
pt(195).paramname = 'HitCrossingOffset';
pt(195).class     = 'scalar';
pt(195).nrows     = 1;
pt(195).ncols     = 1;
pt(195).subsource = 'SS_DOUBLE';
pt(195).ndims     = '2';
pt(195).size      = '[]';
pt(195).isStruct  = false;
pt(195).symbol     = 'Wind_Turbine_P.HitCrossing_Offset_b';
pt(195).baseaddr   = '&Wind_Turbine_P.HitCrossing_Offset_b';
pt(195).dtname     = 'real_T';



  
pt(196).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Stair Generator/Model/Look-Up Table';
pt(196).paramname = 'InputValues';
pt(196).class     = 'vector';
pt(196).nrows     = 1;
pt(196).ncols     = 4;
pt(196).subsource = 'SS_DOUBLE';
pt(196).ndims     = '2';
pt(196).size      = '[]';
pt(196).isStruct  = false;
pt(196).symbol     = 'Wind_Turbine_P.LookUpTable_XData_k1';
pt(196).baseaddr   = '&Wind_Turbine_P.LookUpTable_XData_k1[0]';
pt(196).dtname     = 'real_T';



  
pt(197).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Stair Generator/Model/Look-Up Table';
pt(197).paramname = 'Table';
pt(197).class     = 'vector';
pt(197).nrows     = 1;
pt(197).ncols     = 4;
pt(197).subsource = 'SS_DOUBLE';
pt(197).ndims     = '2';
pt(197).size      = '[]';
pt(197).isStruct  = false;
pt(197).symbol     = 'Wind_Turbine_P.LookUpTable_YData_ab';
pt(197).baseaddr   = '&Wind_Turbine_P.LookUpTable_YData_ab[0]';
pt(197).dtname     = 'real_T';



  
pt(198).blockname = 'Nacelle/Hub Axis/Rotate/Sensing/PS-Simulink Converter/EVAL_KEY/GAIN';
pt(198).paramname = 'Gain';
pt(198).class     = 'scalar';
pt(198).nrows     = 1;
pt(198).ncols     = 1;
pt(198).subsource = 'SS_DOUBLE';
pt(198).ndims     = '2';
pt(198).size      = '[]';
pt(198).isStruct  = false;
pt(198).symbol     = 'Wind_Turbine_P.GAIN_Gain_n';
pt(198).baseaddr   = '&Wind_Turbine_P.GAIN_Gain_n';
pt(198).dtname     = 'real_T';



  
pt(199).blockname = 'Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/EM Logic/Actuator Dynamics';
pt(199).paramname = 'x_initial';
pt(199).class     = 'scalar';
pt(199).nrows     = 1;
pt(199).ncols     = 1;
pt(199).subsource = 'SS_DOUBLE';
pt(199).ndims     = '2';
pt(199).size      = '[]';
pt(199).isStruct  = false;
pt(199).symbol     = 'Wind_Turbine_P.ActuatorDynamics_x_initial';
pt(199).baseaddr   = '&Wind_Turbine_P.ActuatorDynamics_x_initial';
pt(199).dtname     = 'real_T';



  
pt(200).blockname = 'Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/EM Logic/Emergeny Brake Pitch  Close Valve';
pt(200).paramname = 'Value';
pt(200).class     = 'scalar';
pt(200).nrows     = 1;
pt(200).ncols     = 1;
pt(200).subsource = 'SS_DOUBLE';
pt(200).ndims     = '2';
pt(200).size      = '[]';
pt(200).isStruct  = false;
pt(200).symbol     = 'Wind_Turbine_P.EmergenyBrakePitchCloseValve_Va';
pt(200).baseaddr   = '&Wind_Turbine_P.EmergenyBrakePitchCloseValve_Va';
pt(200).dtname     = 'real_T';



  
pt(201).blockname = 'Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/EM Logic/Switch';
pt(201).paramname = 'Threshold';
pt(201).class     = 'scalar';
pt(201).nrows     = 1;
pt(201).ncols     = 1;
pt(201).subsource = 'SS_DOUBLE';
pt(201).ndims     = '2';
pt(201).size      = '[]';
pt(201).isStruct  = false;
pt(201).symbol     = 'Wind_Turbine_P.Switch_Threshold_d';
pt(201).baseaddr   = '&Wind_Turbine_P.Switch_Threshold_d';
pt(201).dtname     = 'real_T';



  
pt(202).blockname = 'Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/EM Logic/Actuator Dynamics';
pt(202).paramname = 'x_initial';
pt(202).class     = 'scalar';
pt(202).nrows     = 1;
pt(202).ncols     = 1;
pt(202).subsource = 'SS_DOUBLE';
pt(202).ndims     = '2';
pt(202).size      = '[]';
pt(202).isStruct  = false;
pt(202).symbol     = 'Wind_Turbine_P.ActuatorDynamics_x_initial_o';
pt(202).baseaddr   = '&Wind_Turbine_P.ActuatorDynamics_x_initial_o';
pt(202).dtname     = 'real_T';



  
pt(203).blockname = 'Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/EM Logic/Emergeny Brake Pitch  Close Valve';
pt(203).paramname = 'Value';
pt(203).class     = 'scalar';
pt(203).nrows     = 1;
pt(203).ncols     = 1;
pt(203).subsource = 'SS_DOUBLE';
pt(203).ndims     = '2';
pt(203).size      = '[]';
pt(203).isStruct  = false;
pt(203).symbol     = 'Wind_Turbine_P.EmergenyBrakePitchCloseValve__h';
pt(203).baseaddr   = '&Wind_Turbine_P.EmergenyBrakePitchCloseValve__h';
pt(203).dtname     = 'real_T';



  
pt(204).blockname = 'Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/EM Logic/Switch';
pt(204).paramname = 'Threshold';
pt(204).class     = 'scalar';
pt(204).nrows     = 1;
pt(204).ncols     = 1;
pt(204).subsource = 'SS_DOUBLE';
pt(204).ndims     = '2';
pt(204).size      = '[]';
pt(204).isStruct  = false;
pt(204).symbol     = 'Wind_Turbine_P.Switch_Threshold_cr';
pt(204).baseaddr   = '&Wind_Turbine_P.Switch_Threshold_cr';
pt(204).dtname     = 'real_T';



  
pt(205).blockname = 'Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/EM Logic/Actuator Dynamics';
pt(205).paramname = 'x_initial';
pt(205).class     = 'scalar';
pt(205).nrows     = 1;
pt(205).ncols     = 1;
pt(205).subsource = 'SS_DOUBLE';
pt(205).ndims     = '2';
pt(205).size      = '[]';
pt(205).isStruct  = false;
pt(205).symbol     = 'Wind_Turbine_P.ActuatorDynamics_x_initial_b';
pt(205).baseaddr   = '&Wind_Turbine_P.ActuatorDynamics_x_initial_b';
pt(205).dtname     = 'real_T';



  
pt(206).blockname = 'Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/EM Logic/Emergeny Brake Pitch  Close Valve';
pt(206).paramname = 'Value';
pt(206).class     = 'scalar';
pt(206).nrows     = 1;
pt(206).ncols     = 1;
pt(206).subsource = 'SS_DOUBLE';
pt(206).ndims     = '2';
pt(206).size      = '[]';
pt(206).isStruct  = false;
pt(206).symbol     = 'Wind_Turbine_P.EmergenyBrakePitchCloseValve__f';
pt(206).baseaddr   = '&Wind_Turbine_P.EmergenyBrakePitchCloseValve__f';
pt(206).dtname     = 'real_T';



  
pt(207).blockname = 'Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/EM Logic/Switch';
pt(207).paramname = 'Threshold';
pt(207).class     = 'scalar';
pt(207).nrows     = 1;
pt(207).ncols     = 1;
pt(207).subsource = 'SS_DOUBLE';
pt(207).ndims     = '2';
pt(207).size      = '[]';
pt(207).isStruct  = false;
pt(207).symbol     = 'Wind_Turbine_P.Switch_Threshold_k0';
pt(207).baseaddr   = '&Wind_Turbine_P.Switch_Threshold_k0';
pt(207).dtname     = 'real_T';



  
pt(208).blockname = 'Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/PI Controller Rotor Speed/Integrator';
pt(208).paramname = 'InitialCondition';
pt(208).class     = 'scalar';
pt(208).nrows     = 1;
pt(208).ncols     = 1;
pt(208).subsource = 'SS_DOUBLE';
pt(208).ndims     = '2';
pt(208).size      = '[]';
pt(208).isStruct  = false;
pt(208).symbol     = 'Wind_Turbine_P.Integrator_IC_d';
pt(208).baseaddr   = '&Wind_Turbine_P.Integrator_IC_d';
pt(208).dtname     = 'real_T';



  
pt(209).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/a';
pt(209).paramname = 'Gain';
pt(209).class     = 'scalar';
pt(209).nrows     = 1;
pt(209).ncols     = 1;
pt(209).subsource = 'SS_DOUBLE';
pt(209).ndims     = '2';
pt(209).size      = '[]';
pt(209).isStruct  = true;
pt(209).symbol     = 'Wind_Turbine_P.a_Gain_o';
pt(209).baseaddr   = '&Wind_Turbine_P.a_Gain_o.re';
pt(209).dtname     = 'real_T';



  
pt(210).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/a^2';
pt(210).paramname = 'Gain';
pt(210).class     = 'scalar';
pt(210).nrows     = 1;
pt(210).ncols     = 1;
pt(210).subsource = 'SS_DOUBLE';
pt(210).ndims     = '2';
pt(210).size      = '[]';
pt(210).isStruct  = true;
pt(210).symbol     = 'Wind_Turbine_P.a2_Gain_j';
pt(210).baseaddr   = '&Wind_Turbine_P.a2_Gain_j.re';
pt(210).dtname     = 'real_T';



  
pt(211).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/inv';
pt(211).paramname = 'Gain';
pt(211).class     = 'scalar';
pt(211).nrows     = 1;
pt(211).ncols     = 1;
pt(211).subsource = 'SS_DOUBLE';
pt(211).ndims     = '2';
pt(211).size      = '[]';
pt(211).isStruct  = false;
pt(211).symbol     = 'Wind_Turbine_P.inv_Gain';
pt(211).baseaddr   = '&Wind_Turbine_P.inv_Gain';
pt(211).dtname     = 'real_T';



  
pt(212).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/a';
pt(212).paramname = 'Gain';
pt(212).class     = 'scalar';
pt(212).nrows     = 1;
pt(212).ncols     = 1;
pt(212).subsource = 'SS_DOUBLE';
pt(212).ndims     = '2';
pt(212).size      = '[]';
pt(212).isStruct  = true;
pt(212).symbol     = 'Wind_Turbine_P.a_Gain';
pt(212).baseaddr   = '&Wind_Turbine_P.a_Gain.re';
pt(212).dtname     = 'real_T';



  
pt(213).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/a^2';
pt(213).paramname = 'Gain';
pt(213).class     = 'scalar';
pt(213).nrows     = 1;
pt(213).ncols     = 1;
pt(213).subsource = 'SS_DOUBLE';
pt(213).ndims     = '2';
pt(213).size      = '[]';
pt(213).isStruct  = true;
pt(213).symbol     = 'Wind_Turbine_P.a2_Gain';
pt(213).baseaddr   = '&Wind_Turbine_P.a2_Gain.re';
pt(213).dtname     = 'real_T';



  
pt(214).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/inv';
pt(214).paramname = 'Gain';
pt(214).class     = 'scalar';
pt(214).nrows     = 1;
pt(214).ncols     = 1;
pt(214).subsource = 'SS_DOUBLE';
pt(214).ndims     = '2';
pt(214).size      = '[]';
pt(214).isStruct  = false;
pt(214).symbol     = 'Wind_Turbine_P.inv_Gain_h';
pt(214).baseaddr   = '&Wind_Turbine_P.inv_Gain_h';
pt(214).dtname     = 'real_T';



  
pt(215).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Electromagnetic Torque/1-1';
pt(215).paramname = 'Gain';
pt(215).class     = 'vector';
pt(215).nrows     = 1;
pt(215).ncols     = 2;
pt(215).subsource = 'SS_DOUBLE';
pt(215).ndims     = '2';
pt(215).size      = '[]';
pt(215).isStruct  = false;
pt(215).symbol     = 'Wind_Turbine_P.u1_Gain';
pt(215).baseaddr   = '&Wind_Turbine_P.u1_Gain[0]';
pt(215).dtname     = 'real_T';



  
pt(216).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Constant1';
pt(216).paramname = 'Value';
pt(216).class     = 'scalar';
pt(216).nrows     = 1;
pt(216).ncols     = 1;
pt(216).subsource = 'SS_DOUBLE';
pt(216).ndims     = '2';
pt(216).size      = '[]';
pt(216).isStruct  = false;
pt(216).symbol     = 'Wind_Turbine_P.Constant1_Value';
pt(216).baseaddr   = '&Wind_Turbine_P.Constant1_Value';
pt(216).dtname     = 'real_T';



  
pt(217).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/u1';
pt(217).paramname = 'Value';
pt(217).class     = 'col-mat';
pt(217).nrows     = 4;
pt(217).ncols     = 4;
pt(217).subsource = 'SS_DOUBLE';
pt(217).ndims     = '2';
pt(217).size      = '[]';
pt(217).isStruct  = false;
pt(217).symbol     = 'Wind_Turbine_P.u1_Value_i';
pt(217).baseaddr   = '&Wind_Turbine_P.u1_Value_i[0]';
pt(217).dtname     = 'real_T';



  
pt(218).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/1-D Lookup Table';
pt(218).paramname = 'Table';
pt(218).class     = 'vector';
pt(218).nrows     = 1;
pt(218).ncols     = 2;
pt(218).subsource = 'SS_DOUBLE';
pt(218).ndims     = '2';
pt(218).size      = '[]';
pt(218).isStruct  = false;
pt(218).symbol     = 'Wind_Turbine_P.uDLookupTable_tableData';
pt(218).baseaddr   = '&Wind_Turbine_P.uDLookupTable_tableData[0]';
pt(218).dtname     = 'real_T';



  
pt(219).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/1-D Lookup Table';
pt(219).paramname = 'BreakpointsForDimension1';
pt(219).class     = 'vector';
pt(219).nrows     = 1;
pt(219).ncols     = 2;
pt(219).subsource = 'SS_DOUBLE';
pt(219).ndims     = '2';
pt(219).size      = '[]';
pt(219).isStruct  = false;
pt(219).symbol     = 'Wind_Turbine_P.uDLookupTable_bp01Data';
pt(219).baseaddr   = '&Wind_Turbine_P.uDLookupTable_bp01Data[0]';
pt(219).dtname     = 'real_T';



  
pt(220).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/phi/wbase';
pt(220).paramname = 'Gain';
pt(220).class     = 'scalar';
pt(220).nrows     = 1;
pt(220).ncols     = 1;
pt(220).subsource = 'SS_DOUBLE';
pt(220).ndims     = '2';
pt(220).size      = '[]';
pt(220).isStruct  = false;
pt(220).symbol     = 'Wind_Turbine_P.wbase_Gain';
pt(220).baseaddr   = '&Wind_Turbine_P.wbase_Gain';
pt(220).dtname     = 'real_T';



  
pt(221).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/phi/Integrator';
pt(221).paramname = 'InitialCondition';
pt(221).class     = 'vector';
pt(221).nrows     = 4;
pt(221).ncols     = 1;
pt(221).subsource = 'SS_DOUBLE';
pt(221).ndims     = '2';
pt(221).size      = '[]';
pt(221).isStruct  = false;
pt(221).symbol     = 'Wind_Turbine_P.Integrator_IC_j';
pt(221).baseaddr   = '&Wind_Turbine_P.Integrator_IC_j[0]';
pt(221).dtname     = 'real_T';



  
pt(222).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Constant4';
pt(222).paramname = 'Value';
pt(222).class     = 'scalar';
pt(222).nrows     = 1;
pt(222).ncols     = 1;
pt(222).subsource = 'SS_DOUBLE';
pt(222).ndims     = '2';
pt(222).size      = '[]';
pt(222).isStruct  = true;
pt(222).symbol     = 'Wind_Turbine_P.Constant4_Value_j';
pt(222).baseaddr   = '&Wind_Turbine_P.Constant4_Value_j.re';
pt(222).dtname     = 'real_T';



  
pt(223).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Constant5';
pt(223).paramname = 'Value';
pt(223).class     = 'scalar';
pt(223).nrows     = 1;
pt(223).ncols     = 1;
pt(223).subsource = 'SS_DOUBLE';
pt(223).ndims     = '2';
pt(223).size      = '[]';
pt(223).isStruct  = true;
pt(223).symbol     = 'Wind_Turbine_P.Constant5_Value_j';
pt(223).baseaddr   = '&Wind_Turbine_P.Constant5_Value_j.re';
pt(223).dtname     = 'real_T';



  
pt(224).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Timer/Hit  Crossing';
pt(224).paramname = 'HitCrossingOffset';
pt(224).class     = 'scalar';
pt(224).nrows     = 1;
pt(224).ncols     = 1;
pt(224).subsource = 'SS_DOUBLE';
pt(224).ndims     = '2';
pt(224).size      = '[]';
pt(224).isStruct  = false;
pt(224).symbol     = 'Wind_Turbine_P.HitCrossing_Offset_c';
pt(224).baseaddr   = '&Wind_Turbine_P.HitCrossing_Offset_c';
pt(224).dtname     = 'real_T';



  
pt(225).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Timer/Look-Up Table';
pt(225).paramname = 'InputValues';
pt(225).class     = 'vector';
pt(225).nrows     = 1;
pt(225).ncols     = 5;
pt(225).subsource = 'SS_DOUBLE';
pt(225).ndims     = '2';
pt(225).size      = '[]';
pt(225).isStruct  = false;
pt(225).symbol     = 'Wind_Turbine_P.LookUpTable_XData_l';
pt(225).baseaddr   = '&Wind_Turbine_P.LookUpTable_XData_l[0]';
pt(225).dtname     = 'real_T';



  
pt(226).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Timer/Look-Up Table';
pt(226).paramname = 'Table';
pt(226).class     = 'vector';
pt(226).nrows     = 1;
pt(226).ncols     = 5;
pt(226).subsource = 'SS_DOUBLE';
pt(226).ndims     = '2';
pt(226).size      = '[]';
pt(226).isStruct  = false;
pt(226).symbol     = 'Wind_Turbine_P.LookUpTable_YData_a';
pt(226).baseaddr   = '&Wind_Turbine_P.LookUpTable_YData_a[0]';
pt(226).dtname     = 'real_T';



  
pt(227).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Timer/Hit  Crossing';
pt(227).paramname = 'HitCrossingOffset';
pt(227).class     = 'scalar';
pt(227).nrows     = 1;
pt(227).ncols     = 1;
pt(227).subsource = 'SS_DOUBLE';
pt(227).ndims     = '2';
pt(227).size      = '[]';
pt(227).isStruct  = false;
pt(227).symbol     = 'Wind_Turbine_P.HitCrossing_Offset_d';
pt(227).baseaddr   = '&Wind_Turbine_P.HitCrossing_Offset_d';
pt(227).dtname     = 'real_T';



  
pt(228).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Timer/Look-Up Table';
pt(228).paramname = 'InputValues';
pt(228).class     = 'vector';
pt(228).nrows     = 1;
pt(228).ncols     = 5;
pt(228).subsource = 'SS_DOUBLE';
pt(228).ndims     = '2';
pt(228).size      = '[]';
pt(228).isStruct  = false;
pt(228).symbol     = 'Wind_Turbine_P.LookUpTable_XData_k';
pt(228).baseaddr   = '&Wind_Turbine_P.LookUpTable_XData_k[0]';
pt(228).dtname     = 'real_T';



  
pt(229).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Timer/Look-Up Table';
pt(229).paramname = 'Table';
pt(229).class     = 'vector';
pt(229).nrows     = 1;
pt(229).ncols     = 5;
pt(229).subsource = 'SS_DOUBLE';
pt(229).ndims     = '2';
pt(229).size      = '[]';
pt(229).isStruct  = false;
pt(229).symbol     = 'Wind_Turbine_P.LookUpTable_YData_n';
pt(229).baseaddr   = '&Wind_Turbine_P.LookUpTable_YData_n[0]';
pt(229).dtname     = 'real_T';



  
pt(230).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Timer/Hit  Crossing';
pt(230).paramname = 'HitCrossingOffset';
pt(230).class     = 'scalar';
pt(230).nrows     = 1;
pt(230).ncols     = 1;
pt(230).subsource = 'SS_DOUBLE';
pt(230).ndims     = '2';
pt(230).size      = '[]';
pt(230).isStruct  = false;
pt(230).symbol     = 'Wind_Turbine_P.HitCrossing_Offset_l';
pt(230).baseaddr   = '&Wind_Turbine_P.HitCrossing_Offset_l';
pt(230).dtname     = 'real_T';



  
pt(231).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Timer/Look-Up Table';
pt(231).paramname = 'InputValues';
pt(231).class     = 'vector';
pt(231).nrows     = 1;
pt(231).ncols     = 5;
pt(231).subsource = 'SS_DOUBLE';
pt(231).ndims     = '2';
pt(231).size      = '[]';
pt(231).isStruct  = false;
pt(231).symbol     = 'Wind_Turbine_P.LookUpTable_XData_g';
pt(231).baseaddr   = '&Wind_Turbine_P.LookUpTable_XData_g[0]';
pt(231).dtname     = 'real_T';



  
pt(232).blockname = 'Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Timer/Look-Up Table';
pt(232).paramname = 'Table';
pt(232).class     = 'vector';
pt(232).nrows     = 1;
pt(232).ncols     = 5;
pt(232).subsource = 'SS_DOUBLE';
pt(232).ndims     = '2';
pt(232).size      = '[]';
pt(232).isStruct  = false;
pt(232).symbol     = 'Wind_Turbine_P.LookUpTable_YData_m';
pt(232).baseaddr   = '&Wind_Turbine_P.LookUpTable_YData_m[0]';
pt(232).dtname     = 'real_T';



  
pt(233).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Timer/Hit  Crossing';
pt(233).paramname = 'HitCrossingOffset';
pt(233).class     = 'scalar';
pt(233).nrows     = 1;
pt(233).ncols     = 1;
pt(233).subsource = 'SS_DOUBLE';
pt(233).ndims     = '2';
pt(233).size      = '[]';
pt(233).isStruct  = false;
pt(233).symbol     = 'Wind_Turbine_P.HitCrossing_Offset_a';
pt(233).baseaddr   = '&Wind_Turbine_P.HitCrossing_Offset_a';
pt(233).dtname     = 'real_T';



  
pt(234).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Timer/Look-Up Table';
pt(234).paramname = 'InputValues';
pt(234).class     = 'vector';
pt(234).nrows     = 1;
pt(234).ncols     = 5;
pt(234).subsource = 'SS_DOUBLE';
pt(234).ndims     = '2';
pt(234).size      = '[]';
pt(234).isStruct  = false;
pt(234).symbol     = 'Wind_Turbine_P.LookUpTable_XData_pn';
pt(234).baseaddr   = '&Wind_Turbine_P.LookUpTable_XData_pn[0]';
pt(234).dtname     = 'real_T';



  
pt(235).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Timer/Look-Up Table';
pt(235).paramname = 'Table';
pt(235).class     = 'vector';
pt(235).nrows     = 1;
pt(235).ncols     = 5;
pt(235).subsource = 'SS_DOUBLE';
pt(235).ndims     = '2';
pt(235).size      = '[]';
pt(235).isStruct  = false;
pt(235).symbol     = 'Wind_Turbine_P.LookUpTable_YData_mp';
pt(235).baseaddr   = '&Wind_Turbine_P.LookUpTable_YData_mp[0]';
pt(235).dtname     = 'real_T';



  
pt(236).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Timer/Hit  Crossing';
pt(236).paramname = 'HitCrossingOffset';
pt(236).class     = 'scalar';
pt(236).nrows     = 1;
pt(236).ncols     = 1;
pt(236).subsource = 'SS_DOUBLE';
pt(236).ndims     = '2';
pt(236).size      = '[]';
pt(236).isStruct  = false;
pt(236).symbol     = 'Wind_Turbine_P.HitCrossing_Offset_cd';
pt(236).baseaddr   = '&Wind_Turbine_P.HitCrossing_Offset_cd';
pt(236).dtname     = 'real_T';



  
pt(237).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Timer/Look-Up Table';
pt(237).paramname = 'InputValues';
pt(237).class     = 'vector';
pt(237).nrows     = 1;
pt(237).ncols     = 5;
pt(237).subsource = 'SS_DOUBLE';
pt(237).ndims     = '2';
pt(237).size      = '[]';
pt(237).isStruct  = false;
pt(237).symbol     = 'Wind_Turbine_P.LookUpTable_XData_le';
pt(237).baseaddr   = '&Wind_Turbine_P.LookUpTable_XData_le[0]';
pt(237).dtname     = 'real_T';



  
pt(238).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Timer/Look-Up Table';
pt(238).paramname = 'Table';
pt(238).class     = 'vector';
pt(238).nrows     = 1;
pt(238).ncols     = 5;
pt(238).subsource = 'SS_DOUBLE';
pt(238).ndims     = '2';
pt(238).size      = '[]';
pt(238).isStruct  = false;
pt(238).symbol     = 'Wind_Turbine_P.LookUpTable_YData_e';
pt(238).baseaddr   = '&Wind_Turbine_P.LookUpTable_YData_e[0]';
pt(238).dtname     = 'real_T';



  
pt(239).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Timer/Hit  Crossing';
pt(239).paramname = 'HitCrossingOffset';
pt(239).class     = 'scalar';
pt(239).nrows     = 1;
pt(239).ncols     = 1;
pt(239).subsource = 'SS_DOUBLE';
pt(239).ndims     = '2';
pt(239).size      = '[]';
pt(239).isStruct  = false;
pt(239).symbol     = 'Wind_Turbine_P.HitCrossing_Offset_m';
pt(239).baseaddr   = '&Wind_Turbine_P.HitCrossing_Offset_m';
pt(239).dtname     = 'real_T';



  
pt(240).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Timer/Look-Up Table';
pt(240).paramname = 'InputValues';
pt(240).class     = 'vector';
pt(240).nrows     = 1;
pt(240).ncols     = 5;
pt(240).subsource = 'SS_DOUBLE';
pt(240).ndims     = '2';
pt(240).size      = '[]';
pt(240).isStruct  = false;
pt(240).symbol     = 'Wind_Turbine_P.LookUpTable_XData_h';
pt(240).baseaddr   = '&Wind_Turbine_P.LookUpTable_XData_h[0]';
pt(240).dtname     = 'real_T';



  
pt(241).blockname = 'Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Timer/Look-Up Table';
pt(241).paramname = 'Table';
pt(241).class     = 'vector';
pt(241).nrows     = 1;
pt(241).ncols     = 5;
pt(241).subsource = 'SS_DOUBLE';
pt(241).ndims     = '2';
pt(241).size      = '[]';
pt(241).isStruct  = false;
pt(241).symbol     = 'Wind_Turbine_P.LookUpTable_YData_d';
pt(241).baseaddr   = '&Wind_Turbine_P.LookUpTable_YData_d[0]';
pt(241).dtname     = 'real_T';



  
pt(242).blockname = 'Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/PS-Simulink Converter/EVAL_KEY/GAIN';
pt(242).paramname = 'Gain';
pt(242).class     = 'scalar';
pt(242).nrows     = 1;
pt(242).ncols     = 1;
pt(242).subsource = 'SS_DOUBLE';
pt(242).ndims     = '2';
pt(242).size      = '[]';
pt(242).isStruct  = false;
pt(242).symbol     = 'Wind_Turbine_P.GAIN_Gain';
pt(242).baseaddr   = '&Wind_Turbine_P.GAIN_Gain';
pt(242).dtname     = 'real_T';



  
pt(243).blockname = 'Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/PS-Simulink Converter1/EVAL_KEY/GAIN';
pt(243).paramname = 'Gain';
pt(243).class     = 'scalar';
pt(243).nrows     = 1;
pt(243).ncols     = 1;
pt(243).subsource = 'SS_DOUBLE';
pt(243).ndims     = '2';
pt(243).size      = '[]';
pt(243).isStruct  = false;
pt(243).symbol     = 'Wind_Turbine_P.GAIN_Gain_g';
pt(243).baseaddr   = '&Wind_Turbine_P.GAIN_Gain_g';
pt(243).dtname     = 'real_T';



  
pt(244).blockname = 'Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/PS-Simulink Converter/EVAL_KEY/GAIN';
pt(244).paramname = 'Gain';
pt(244).class     = 'scalar';
pt(244).nrows     = 1;
pt(244).ncols     = 1;
pt(244).subsource = 'SS_DOUBLE';
pt(244).ndims     = '2';
pt(244).size      = '[]';
pt(244).isStruct  = false;
pt(244).symbol     = 'Wind_Turbine_P.GAIN_Gain_c';
pt(244).baseaddr   = '&Wind_Turbine_P.GAIN_Gain_c';
pt(244).dtname     = 'real_T';



  
pt(245).blockname = 'Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/PS-Simulink Converter1/EVAL_KEY/GAIN';
pt(245).paramname = 'Gain';
pt(245).class     = 'scalar';
pt(245).nrows     = 1;
pt(245).ncols     = 1;
pt(245).subsource = 'SS_DOUBLE';
pt(245).ndims     = '2';
pt(245).size      = '[]';
pt(245).isStruct  = false;
pt(245).symbol     = 'Wind_Turbine_P.GAIN_Gain_m';
pt(245).baseaddr   = '&Wind_Turbine_P.GAIN_Gain_m';
pt(245).dtname     = 'real_T';



  
pt(246).blockname = 'Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/PS-Simulink Converter/EVAL_KEY/GAIN';
pt(246).paramname = 'Gain';
pt(246).class     = 'scalar';
pt(246).nrows     = 1;
pt(246).ncols     = 1;
pt(246).subsource = 'SS_DOUBLE';
pt(246).ndims     = '2';
pt(246).size      = '[]';
pt(246).isStruct  = false;
pt(246).symbol     = 'Wind_Turbine_P.GAIN_Gain_cz';
pt(246).baseaddr   = '&Wind_Turbine_P.GAIN_Gain_cz';
pt(246).dtname     = 'real_T';



  
pt(247).blockname = 'Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/PS-Simulink Converter1/EVAL_KEY/GAIN';
pt(247).paramname = 'Gain';
pt(247).class     = 'scalar';
pt(247).nrows     = 1;
pt(247).ncols     = 1;
pt(247).subsource = 'SS_DOUBLE';
pt(247).ndims     = '2';
pt(247).size      = '[]';
pt(247).isStruct  = false;
pt(247).symbol     = 'Wind_Turbine_P.GAIN_Gain_nu';
pt(247).baseaddr   = '&Wind_Turbine_P.GAIN_Gain_nu';
pt(247).dtname     = 'real_T';



  
pt(248).blockname = 'Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/PS-Simulink Converter/EVAL_KEY/GAIN';
pt(248).paramname = 'Gain';
pt(248).class     = 'scalar';
pt(248).nrows     = 1;
pt(248).ncols     = 1;
pt(248).subsource = 'SS_DOUBLE';
pt(248).ndims     = '2';
pt(248).size      = '[]';
pt(248).isStruct  = false;
pt(248).symbol     = 'Wind_Turbine_P.GAIN_Gain_l';
pt(248).baseaddr   = '&Wind_Turbine_P.GAIN_Gain_l';
pt(248).dtname     = 'real_T';



  
pt(249).blockname = 'Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/PS-Simulink Converter1/EVAL_KEY/GAIN';
pt(249).paramname = 'Gain';
pt(249).class     = 'scalar';
pt(249).nrows     = 1;
pt(249).ncols     = 1;
pt(249).subsource = 'SS_DOUBLE';
pt(249).ndims     = '2';
pt(249).size      = '[]';
pt(249).isStruct  = false;
pt(249).symbol     = 'Wind_Turbine_P.GAIN_Gain_e';
pt(249).baseaddr   = '&Wind_Turbine_P.GAIN_Gain_e';
pt(249).dtname     = 'real_T';



  
pt(250).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Laq=Lad/u2';
pt(250).paramname = 'Value';
pt(250).class     = 'vector';
pt(250).nrows     = 1;
pt(250).ncols     = 2;
pt(250).subsource = 'SS_DOUBLE';
pt(250).ndims     = '2';
pt(250).size      = '[]';
pt(250).isStruct  = false;
pt(250).symbol     = 'Wind_Turbine_P.u2_Value';
pt(250).baseaddr   = '&Wind_Turbine_P.u2_Value[0]';
pt(250).dtname     = 'real_T';



  
pt(251).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Matrix L/u1';
pt(251).paramname = 'Value';
pt(251).class     = 'col-mat';
pt(251).nrows     = 4;
pt(251).ncols     = 4;
pt(251).subsource = 'SS_DOUBLE';
pt(251).ndims     = '2';
pt(251).size      = '[]';
pt(251).isStruct  = false;
pt(251).symbol     = 'Wind_Turbine_P.u1_Value_b';
pt(251).baseaddr   = '&Wind_Turbine_P.u1_Value_b[0]';
pt(251).dtname     = 'real_T';



  
pt(252).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Matrix L/u5';
pt(252).paramname = 'Value';
pt(252).class     = 'col-mat';
pt(252).nrows     = 4;
pt(252).ncols     = 4;
pt(252).subsource = 'SS_DOUBLE';
pt(252).ndims     = '2';
pt(252).size      = '[]';
pt(252).isStruct  = false;
pt(252).symbol     = 'Wind_Turbine_P.u5_Value';
pt(252).baseaddr   = '&Wind_Turbine_P.u5_Value[0]';
pt(252).dtname     = 'real_T';



  
pt(253).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Time Constant/1//T (T= 1e-6s)';
pt(253).paramname = 'Gain';
pt(253).class     = 'scalar';
pt(253).nrows     = 1;
pt(253).ncols     = 1;
pt(253).subsource = 'SS_DOUBLE';
pt(253).ndims     = '2';
pt(253).size      = '[]';
pt(253).isStruct  = false;
pt(253).symbol     = 'Wind_Turbine_P.uTT1e6s_Gain';
pt(253).baseaddr   = '&Wind_Turbine_P.uTT1e6s_Gain';
pt(253).dtname     = 'real_T';



  
pt(254).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Time Constant/Integrator';
pt(254).paramname = 'InitialCondition';
pt(254).class     = 'scalar';
pt(254).nrows     = 1;
pt(254).ncols     = 1;
pt(254).subsource = 'SS_DOUBLE';
pt(254).ndims     = '2';
pt(254).size      = '[]';
pt(254).isStruct  = false;
pt(254).symbol     = 'Wind_Turbine_P.Integrator_IC';
pt(254).baseaddr   = '&Wind_Turbine_P.Integrator_IC';
pt(254).dtname     = 'real_T';



  
pt(255).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/phimqd/u1';
pt(255).paramname = 'Value';
pt(255).class     = 'vector';
pt(255).nrows     = 1;
pt(255).ncols     = 2;
pt(255).subsource = 'SS_DOUBLE';
pt(255).ndims     = '2';
pt(255).size      = '[]';
pt(255).isStruct  = false;
pt(255).symbol     = 'Wind_Turbine_P.u1_Value';
pt(255).baseaddr   = '&Wind_Turbine_P.u1_Value[0]';
pt(255).dtname     = 'real_T';



  
pt(256).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Zr/Constant2';
pt(256).paramname = 'Value';
pt(256).class     = 'scalar';
pt(256).nrows     = 1;
pt(256).ncols     = 1;
pt(256).subsource = 'SS_DOUBLE';
pt(256).ndims     = '2';
pt(256).size      = '[]';
pt(256).isStruct  = false;
pt(256).symbol     = 'Wind_Turbine_P.Constant2_Value_l';
pt(256).baseaddr   = '&Wind_Turbine_P.Constant2_Value_l';
pt(256).dtname     = 'real_T';



  
pt(257).blockname = 'Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Zr/Constant4';
pt(257).paramname = 'Value';
pt(257).class     = 'scalar';
pt(257).nrows     = 1;
pt(257).ncols     = 1;
pt(257).subsource = 'SS_DOUBLE';
pt(257).ndims     = '2';
pt(257).size      = '[]';
pt(257).isStruct  = true;
pt(257).symbol     = 'Wind_Turbine_P.Constant4_Value_l';
pt(257).baseaddr   = '&Wind_Turbine_P.Constant4_Value_l.re';
pt(257).dtname     = 'real_T';



  
pt(258).blockname = 'Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/PS-Simulink Converter/EVAL_KEY/GAIN';
pt(258).paramname = 'Gain';
pt(258).class     = 'scalar';
pt(258).nrows     = 1;
pt(258).ncols     = 1;
pt(258).subsource = 'SS_DOUBLE';
pt(258).ndims     = '2';
pt(258).size      = '[]';
pt(258).isStruct  = false;
pt(258).symbol     = 'Wind_Turbine_P.GAIN_Gain_ne';
pt(258).baseaddr   = '&Wind_Turbine_P.GAIN_Gain_ne';
pt(258).dtname     = 'real_T';



  
pt(259).blockname = 'Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/PS-Simulink Converter/EVAL_KEY/GAIN';
pt(259).paramname = 'Gain';
pt(259).class     = 'scalar';
pt(259).nrows     = 1;
pt(259).ncols     = 1;
pt(259).subsource = 'SS_DOUBLE';
pt(259).ndims     = '2';
pt(259).size      = '[]';
pt(259).isStruct  = false;
pt(259).symbol     = 'Wind_Turbine_P.GAIN_Gain_ey';
pt(259).baseaddr   = '&Wind_Turbine_P.GAIN_Gain_ey';
pt(259).dtname     = 'real_T';



  
pt(260).blockname = 'Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/PS-Simulink Converter/EVAL_KEY/GAIN';
pt(260).paramname = 'Gain';
pt(260).class     = 'scalar';
pt(260).nrows     = 1;
pt(260).ncols     = 1;
pt(260).subsource = 'SS_DOUBLE';
pt(260).ndims     = '2';
pt(260).size      = '[]';
pt(260).isStruct  = false;
pt(260).symbol     = 'Wind_Turbine_P.GAIN_Gain_nex';
pt(260).baseaddr   = '&Wind_Turbine_P.GAIN_Gain_nex';
pt(260).dtname     = 'real_T';



  
pt(261).blockname = 'Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/PS-Simulink Converter/EVAL_KEY/GAIN';
pt(261).paramname = 'Gain';
pt(261).class     = 'scalar';
pt(261).nrows     = 1;
pt(261).ncols     = 1;
pt(261).subsource = 'SS_DOUBLE';
pt(261).ndims     = '2';
pt(261).size      = '[]';
pt(261).isStruct  = false;
pt(261).symbol     = 'Wind_Turbine_P.GAIN_Gain_j';
pt(261).baseaddr   = '&Wind_Turbine_P.GAIN_Gain_j';
pt(261).dtname     = 'real_T';



  
pt(262).blockname = '';
pt(262).paramname = 'WT_Params';
pt(262).class     = 'scalar';
pt(262).nrows     = 1;
pt(262).ncols     = 1;
pt(262).subsource = '';
pt(262).ndims     = '2';
pt(262).size      = '[]';
pt(262).isStruct  = true;
pt(262).symbol     = 'Wind_Turbine_P.WT_Params';
pt(262).baseaddr   = '&Wind_Turbine_P.WT_Params';
pt(262).dtname     = 'struct_VxB4cZRzPu25TOKhJlNWLD';
pt(262).elements(1).symbol     = 'Lift_Drag_Coeff';
pt(262).elements(1).nrows     = 1;
pt(262).elements(1).ncols     = 1;
pt(262).elements(1).dtname     = 'struct_VSqffC9uXgYsTbCmvsqodH';
pt(262).elements(2).symbol     = 'Air';
pt(262).elements(2).nrows     = 1;
pt(262).elements(2).ncols     = 1;
pt(262).elements(2).dtname     = 'struct_j4uDtLxTuVlfySlL7I37OF';
pt(262).elements(3).symbol     = 'Rotor';
pt(262).elements(3).nrows     = 1;
pt(262).elements(3).ncols     = 1;
pt(262).elements(3).dtname     = 'struct_Di3CnZQBxWGEFFAy3tQxi';
pt(262).elements(4).symbol     = 'NACA0015';
pt(262).elements(4).nrows     = 1;
pt(262).elements(4).ncols     = 1;
pt(262).elements(4).dtname     = 'struct_apfOIp3eiu3sjFRMWNq7jF';
pt(262).elements(5).symbol     = 'Tower';
pt(262).elements(5).nrows     = 1;
pt(262).elements(5).ncols     = 1;
pt(262).elements(5).dtname     = 'struct_SVIV8u68u95QU7HYBtdrxG';
pt(262).elements(6).symbol     = 'Blade';
pt(262).elements(6).nrows     = 1;
pt(262).elements(6).ncols     = 1;
pt(262).elements(6).dtname     = 'struct_EwfAMnACdOmniE2EROF9tF';
pt(262).elements(7).symbol     = 'Geartrain';
pt(262).elements(7).nrows     = 1;
pt(262).elements(7).ncols     = 1;
pt(262).elements(7).dtname     = 'struct_GphMeAxusWEaIPERrSwCqC';
pt(262).elements(8).symbol     = 'Empty_Geartrain';
pt(262).elements(8).nrows     = 1;
pt(262).elements(8).ncols     = 1;
pt(262).elements(8).dtname     = 'struct_IxHLiFZ9bqHC7py6CjHCUF';
pt(262).elements(9).symbol     = 'Pitch_Controller';
pt(262).elements(9).nrows     = 1;
pt(262).elements(9).ncols     = 1;
pt(262).elements(9).dtname     = 'struct_TVma8f5sh5pwgVDoSH4pdG';
pt(262).elements(10).symbol     = 'Pitch_Actuator';
pt(262).elements(10).nrows     = 1;
pt(262).elements(10).ncols     = 1;
pt(262).elements(10).dtname     = 'struct_0JXeuUB3gt3OTCUvuJ240D';
pt(262).elements(11).symbol     = 'Pitch_Actuation';
pt(262).elements(11).nrows     = 1;
pt(262).elements(11).ncols     = 1;
pt(262).elements(11).dtname     = 'struct_VSENtQ6fZQrBZOqoppZMdD';
pt(262).elements(12).symbol     = 'Generator';
pt(262).elements(12).nrows     = 1;
pt(262).elements(12).ncols     = 1;
pt(262).elements(12).dtname     = 'struct_Bugcbf7mGNGCxM7TeKCQAC';
pt(262).elements(13).symbol     = 'Transformer';
pt(262).elements(13).nrows     = 1;
pt(262).elements(13).ncols     = 1;
pt(262).elements(13).dtname     = 'struct_QlEvLM8RYCeXZuczgmMWvB';
pt(262).elements(14).symbol     = 'Grid';
pt(262).elements(14).nrows     = 1;
pt(262).elements(14).ncols     = 1;
pt(262).elements(14).dtname     = 'struct_hu7Ih2xmcHcBhGiXdCXRDB';
pt(262).elements(15).symbol     = 'Brakes';
pt(262).elements(15).nrows     = 1;
pt(262).elements(15).ncols     = 1;
pt(262).elements(15).dtname     = 'struct_9w7DyzDqSSDIxgpxbWV87G';
pt(262).elements(16).symbol     = 'Yaw_Actuator';
pt(262).elements(16).nrows     = 1;
pt(262).elements(16).ncols     = 1;
pt(262).elements(16).dtname     = 'struct_P2L5V6YG83XZ6MgEyLl6iE';
pt(262).elements(17).symbol     = 'Yaw_Controller';
pt(262).elements(17).nrows     = 1;
pt(262).elements(17).ncols     = 1;
pt(262).elements(17).dtname     = 'struct_GdoRUZPqyeOp3ZdXMVaVoH';
pt(262).elements(18).symbol     = 'Nacelle';
pt(262).elements(18).nrows     = 1;
pt(262).elements(18).ncols     = 1;
pt(262).elements(18).dtname     = 'struct_OvERKxa5emj52ZlerRp2AF';
pt(262).elements(19).symbol     = 'Main_Controller';
pt(262).elements(19).nrows     = 1;
pt(262).elements(19).ncols     = 1;
pt(262).elements(19).dtname     = 'struct_yWCqpMB2eT21MIMr1gFptC';
pt(262).elements(20).symbol     = 'Environment';
pt(262).elements(20).nrows     = 1;
pt(262).elements(20).ncols     = 1;
pt(262).elements(20).dtname     = 'struct_jBfPITc89BZOUITYrKwRRD';



  
pt(263).blockname = '';
pt(263).paramname = 'Actuator_Lookup';
pt(263).class     = 'scalar';
pt(263).nrows     = 1;
pt(263).ncols     = 1;
pt(263).subsource = '';
pt(263).ndims     = '2';
pt(263).size      = '[]';
pt(263).isStruct  = true;
pt(263).symbol     = 'Wind_Turbine_P.Actuator_Lookup';
pt(263).baseaddr   = '&Wind_Turbine_P.Actuator_Lookup';
pt(263).dtname     = 'struct_xsORZR4HqlewCZVNsuZuW';
pt(263).elements(1).symbol     = 'extension';
pt(263).elements(1).nrows     = 88;
pt(263).elements(1).ncols     = 1;
pt(263).elements(1).dtname     = 'real_T';
pt(263).elements(2).symbol     = 'angle';
pt(263).elements(2).nrows     = 88;
pt(263).elements(2).ncols     = 1;
pt(263).elements(2).dtname     = 'real_T';



  
pt(264).blockname = '';
pt(264).paramname = 'radps2rpm';
pt(264).class     = 'scalar';
pt(264).nrows     = 1;
pt(264).ncols     = 1;
pt(264).subsource = 'SS_DOUBLE';
pt(264).ndims     = '2';
pt(264).size      = '[]';
pt(264).isStruct  = false;
pt(264).symbol     = 'Wind_Turbine_P.radps2rpm';
pt(264).baseaddr   = '&Wind_Turbine_P.radps2rpm';
pt(264).dtname     = 'real_T';


function len = getlenPT
len = 264;

