/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   smallUtilityFunctionsTest.hpp
 * Author: emile
 *
 * Created on June 4, 2019, 1:41 PM
 */
#include "../src/examples/smallUtilityFunctions.hpp"
#include "catch.hpp"

TEST_CASE("test the reading of a sonar file")
{
    std::string filename = "gigigiugiuyjhui.tryty";
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud();
    Eigen::Vector3d leverArm(0,0,0);
    Eigen::Matrix3d boresight();
    SoundVelocityProfile * svp;
    const bool DoLGF = true;
    std::string excep;
    uint64_t pointSize;
    try
    {
        pointSize = readSonarFileIntoPointCloud(filename,cloud,leverArm,boresight,svp,DoLGF);
    }
    catch(Exception * error)
    {
        excep = error->getMessage();
    }
    REQUIRE(excep == "\nError while parsing file \n\n\"" + "gigigiugiuyjhui.tryty" + "\":\n\n" + "Unknown extension" + ".\n");
}


