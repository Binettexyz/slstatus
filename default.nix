{ stdenv, fetchurl, libX11, libXft, libXinerama }:

stdenv.mkDerivation {
  name = "slstatus-head";

  src = builtins.filterSource
    (path: type: (toString path) != (toString ./.git)) ./.;

  buildInputs = [ libX11 libXft libXinerama ];

  prePatch = ''
    substituteInPlace config.mk --replace '/usr/local' $out
  '';
}
