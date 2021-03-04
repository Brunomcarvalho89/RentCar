#ADD_SUBDIRECTORY(src)
cmake_minimum_required(VERSION 3.17)

# set the project name
#PROJECT(carrental)
#project(carrental VERSION 1.0.0 LANGUAGES CXX)
PROJECT(RentCar CXX)

#set(LIBRARY_NAME RentCar1)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/" "${CMAKE_BINARY_DIR}")
SET(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#if(BUILD_SHARED_LIBS)
#    set(CMAKE_POSITION_INDEPENDENT_CODE ON)
#endif()

set(HEADERS 
includes/domain/Address.hpp
includes/domain/Vehicle.hpp
includes/domain/Car.hpp
includes/domain/CarClassification.hpp
includes/domain/CarRentalAgreement.hpp
includes/domain/Client.hpp
includes/domain/DailyPrice.hpp
includes/domain/InsurancePrice.hpp
includes/domain/LegalPerson.hpp
includes/domain/MaintenancePrice.hpp
includes/domain/NaturalPerson.hpp
includes/domain/Person.hpp
includes/domain/RentalPeriod.hpp
includes/domain/VehicleMaintenance.hpp
includes/domain/service/AbstractAddressFactory.hpp
includes/domain/service/AbstractCarFactory.hpp
includes/domain/service/AbstractClientFactory.hpp
includes/domain/service/PersonBuilder.hpp
includes/domain/repository/AbstractCarClassificationRepository.hpp
includes/domain/repository/AbstractCarRepository.hpp
includes/domain/repository/AbstractClientRepository.hpp
includes/domain/repository/AbstractVehicleMaintenanceRepository.hpp
includes/domain/service/impl/AddressFactory.hpp
includes/domain/service/impl/CarFactory.hpp
includes/domain/service/impl/ClientFactory.hpp
includes/domain/service/impl/LegalPersonBuilder.hpp
includes/domain/service/impl/NaturalPersonBuilder.hpp
includes/application/repository/CarClassificationRepository.hpp
includes/application/repository/CarRepository.hpp
includes/application/repository/ClientRepository.hpp
includes/application/repository/VehicleMaintenanceRepository.hpp
)

set(SOURCES 
src/domain/Address.cpp
src/domain/Vehicle.cpp
src/domain/Car.cpp
src/domain/CarClassification.cpp
src/domain/CarRentalAgreement.cpp
src/domain/Client.cpp
src/domain/DailyPrice.cpp
src/domain/InsurancePrice.cpp
src/domain/LegalPerson.cpp
src/domain/MaintenancePrice.cpp
src/domain/NaturalPerson.cpp
src/domain/Person.cpp
src/domain/RentalPeriod.cpp
src/domain/VehicleMaintenance.cpp
src/domain/service/AbstractCarFactory.cpp
src/domain/service/AbstractClientFactory.cpp
src/domain/service/PersonBuilder.cpp
src/domain/service/impl/AddressFactory.cpp
src/domain/service/impl/CarFactory.cpp
src/domain/service/impl/ClientFactory.cpp
src/domain/service/impl/LegalPersonBuilder.cpp
src/domain/service/impl/NaturalPersonBuilder.cpp
src/application/repository/CarClassificationRepository.cpp
src/application/repository/CarRepository.cpp
src/application/repository/ClientRepository.cpp
src/application/repository/VehicleMaintenanceRepository.cpp
)

include_directories(includes)

# add the executable
add_executable(RentCar src/application/main.cpp ${SOURCES})

#add_library(${LIBRARY_NAME} 
#    ${HEADERS}
#    ${SOURCES}
#)
