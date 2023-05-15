/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Copyright (C) YEAR OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

Description
    Template for use with codeStream.

\*---------------------------------------------------------------------------*/

#include "dictionary.H"
#include "Ostream.H"
#include "Pstream.H"
#include "unitConversion.H"

//{{{ begin codeInclude
#line 57 "/home/unimelb.edu.au/lcampoli/UoM/Testcases/SpeedBump/04_Simulation/BSL_RANS_k_Omega_SST/system/blockMeshDict.#codeStream"
#include "pointField.H"
        #include "mathematicalConstants.H"
//}}} end codeInclude

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

// * * * * * * * * * * * * * * * Local Functions * * * * * * * * * * * * * * //

//{{{ begin localCode

//}}} end localCode


// * * * * * * * * * * * * * * * Global Functions  * * * * * * * * * * * * * //

extern "C"
{
    void codeStream_63aebcbab79663c1ac994dcf21e010b9deea7e68
    (
        Ostream& os,
        const dictionary& dict
    )
    {
//{{{ begin code
        #line 63 "/home/unimelb.edu.au/lcampoli/UoM/Testcases/SpeedBump/04_Simulation/BSL_RANS_k_Omega_SST/system/blockMeshDict.#codeStream"
constexpr scalar xMin = -1.0;
        constexpr scalar xMax =  1.5;
        constexpr scalar zMin = -0.5;
        constexpr scalar zMax =  0.5;
        constexpr label nPoints = 1000;
        constexpr scalar dx = (xMax - xMin)/scalar(nPoints - 1);
        constexpr scalar dz = (zMax - zMin)/scalar(nPoints - 1);
        constexpr scalar pi = constant::mathematical::pi;

//        os  << "(" << nl << "spline 2 3" << nl;
//        pointField profile(nPoints);
//
//        for (label i = 0; i < nPoints; ++i)
//        {
//            scalar x = xMin + i*dx;
//            profile[i].x() = x;
//            profile[i].y() = 0.05*pow4(sin(pi*x/0.9 - (pi/3)));
//            profile[i].z() = 1;
//        }
//        os << profile << nl;
//
//        os << "spline 14 15" << nl;
//        profile.replace(2, -1);
//        os << profile << nl;
//
//        os  << ");" << nl;
//}}} end code
    }
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// ************************************************************************* //

