{
  gSystem->Load("libactar.sl");
  gROOT->ProcessLine(".L digitizationMacro.C+");
  thePadsGeometry.SetGeometryValues("ActarTPC");
  theDriftManager.SetDriftVelocity(50.0e-3);
  theDriftManager.SetDiffusionParameters(5.e-4, 5.e-4);
  digitEvents("root_files/sim_files/testMagFieldSimFile.root","root_files/dig_files/MagField.root")
}
//needs "Simpletracks"&"Event" to work
