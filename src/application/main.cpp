#include "stdio.h"
#include "iostream"
#include "domain/Car.hpp"
#include "domain/service/AbstractCarFactory.hpp"
#include "domain/service/impl/CarFactory.hpp"
#include "domain/service/impl/ClientFactory.hpp"
#include "domain/service/impl/NaturalPersonBuilder.hpp"
#include "domain/service/impl/LegalPersonBuilder.hpp"
#include "domain/service/PersonBuilder.hpp"
#include "domain/NaturalPerson.hpp"
#include "domain/Person.hpp"
#include "domain/service/impl/AddressFactory.hpp"
#include "domain/CarRentalAgreement.hpp"
#include "application/repository/CarClassificationRepository.hpp"
#include "application/repository/CarRepository.hpp"
#include "application/repository/ClientRepository.hpp"
#include "domain/RentalPeriod.hpp"
#include "application/repository/VehicleMaintenanceRepository.hpp"
#include <string>
#include <memory>
#include <time.h>
#include <list>
#include <stdlib.h>  

CarRepository carRepository;
CarClassificationRepository carClassificationRepository;
ClientRepository clientRepository;
VehicleMaintenanceRepository vehicleMaintenanceRepository;

void loadCarRentalsRepository() {

    CarFactory carFactory;

    std::shared_ptr<Car> car1 = carFactory.get(1, "Renault", "Sandero", "Stepway", "black", "HPP1H34", "13623133421343", 2012);
    std::shared_ptr<Car> car2 = carFactory.get(2, "Volkswagen", "Gol", "GTI", "black", "JJJ1H34", "312321455673424", 2010);
    std::shared_ptr<Car> car3 = carFactory.get(3, "Fiat", "Argo", "Compact", "black", "HPP1H34", "53443883499300", 2016);

    carRepository.add(car1);
    carRepository.add(car2);
    carRepository.add(car3);
}

void loadClientRepository() {


    std::shared_ptr<AbstractAddressFactory> addressFactory = std::shared_ptr<AddressFactory>(new AddressFactory());
    std::shared_ptr<AbstractClientFactory> clientFactory = std::shared_ptr<ClientFactory>(new ClientFactory());

    std::shared_ptr<Address> address1 = addressFactory->get(1, "Rua 1", "Casa 1", "101", "25655333", "Rio de Janeiro", "Rio de Janeiro", "Brasil");
    std::shared_ptr<Address> address2 = addressFactory->get(2, "Rua 2", "Casa 2", "01", "25655333", "São Paulo", "São Paulo", "Brasil");
    std::shared_ptr<Address> address3 = addressFactory->get(3, "Rua 3", "Casa 3", "1", "25655333", "Belo Horizonte", "Minas Gerais", "Brasil");

    tm* dateOfBirth1 = new tm();
    dateOfBirth1->tm_mday = 14;
    dateOfBirth1->tm_mon = 11;
    dateOfBirth1->tm_year = 1989;

    tm* dateOfBirth2 = new tm();
    dateOfBirth2->tm_mday = 1;
    dateOfBirth2->tm_mon = 1;
    dateOfBirth2->tm_year = 1990;

    tm* dateOfBirth3 = new tm();
    dateOfBirth3->tm_mday = 2;
    dateOfBirth3->tm_mon = 2;
    dateOfBirth3->tm_year = 1991;

    std::shared_ptr<NaturalPersonBuilder> naturalPersonBuilder = std::make_shared<NaturalPersonBuilder>();
    std::shared_ptr<Person> naturalPerson1 = naturalPersonBuilder->withId(1)->withName(std::string("Natural Person 1"))->withIdentificationNumber("11111111155")->withDateOfBirth(dateOfBirth1)->build();

    naturalPersonBuilder = std::make_shared<NaturalPersonBuilder>();
    std::shared_ptr<Person> naturalPerson2 = naturalPersonBuilder->withId(2)->withName(std::string("Natural Person 2"))->withIdentificationNumber("22222222255")->withDateOfBirth(dateOfBirth2)->build();

    std::shared_ptr<LegalPersonBuilder> legalPersonBuilder = std::make_shared<LegalPersonBuilder>();
    std::shared_ptr<Person> legalPerson = legalPersonBuilder->withId(3)->withName(std::string("Legal Person 3"))->withIdentificationNumber("22222222255")->withDateOfBirth(dateOfBirth2)->build();

    std::shared_ptr<Client> client1 = clientFactory->get(1, naturalPerson1, address1);
    std::shared_ptr<Client> client2 = clientFactory->get(2, naturalPerson2, address2);
    std::shared_ptr<Client> client3 = clientFactory->get(3, legalPerson, address3);

    clientRepository.add(client1);
    clientRepository.add(client2);
    clientRepository.add(client3);
}

void allocateCarForMaintenance(std::shared_ptr<Car> car) {

    std::shared_ptr<VehicleMaintenance> vehicleMaintenance = std::make_shared<VehicleMaintenance>(
            vehicleMaintenanceRepository.numberCarsInMaintenance(),
            car,
            std::make_shared<MaintenancePrice>(rand() % 1000));

    vehicleMaintenanceRepository.add(vehicleMaintenance);
}

int main(void) {

    // Carregando lista de clientes.
    loadClientRepository();

    // Carragando a lista de carros dispoveis para locação.
    loadCarRentalsRepository();

    // Tipos de carros
    std::shared_ptr<CarClassification> simpleCar = carClassificationRepository.getByID(1);
    std::shared_ptr<CarClassification> luxuryCar = carClassificationRepository.getByID(2);

    tm* startDate1 = new tm();
    startDate1->tm_mday = 1;
    startDate1->tm_mon = 1;
    startDate1->tm_year = 2021;
    tm* endDate1 = new tm();
    endDate1->tm_mday = 7;
    endDate1->tm_mon = 1;
    endDate1->tm_year = 2021;
    std::shared_ptr<Car> car1 = carRepository.getByID(1);
    CarRentalAgreement carRentalAgreement1(
            1,
            clientRepository.getByID(1),
            car1,
            simpleCar,
            std::make_shared<RentalPeriod>(startDate1, endDate1),
            std::make_shared<DailyPrice>(100.00),
            std::make_shared<InsurancePrice>(20.00));

    tm* startDate2 = new tm();
    startDate2->tm_mday = 1;
    startDate2->tm_mon = 2;
    startDate2->tm_year = 2021;
    tm* endDate2 = new tm();
    endDate2->tm_mday = 7;
    endDate2->tm_mon = 2;
    endDate2->tm_year = 2021;
    std::shared_ptr<Car> car2 = carRepository.getByID(2);
    CarRentalAgreement carRentalAgreement2(
            2,
            clientRepository.getByID(2),
            car2,
            simpleCar,
            std::make_shared<RentalPeriod>(startDate2, endDate2),
            std::make_shared<DailyPrice>(120.00),
            std::make_shared<InsurancePrice>(20.00));

    tm* startDate3 = new tm();
    startDate3->tm_mday = 3;
    startDate3->tm_mon = 3;
    startDate3->tm_year = 2021;
    tm* endDate3 = new tm();
    endDate3->tm_mday = 3;
    endDate3->tm_mon = 4;
    endDate3->tm_year = 2021;
    std::shared_ptr<Car> car3 = carRepository.getByID(3);
    CarRentalAgreement carRentalAgreement3(
            3,
            clientRepository.getByID(3),
            car3,
            luxuryCar,
            std::make_shared<RentalPeriod>(startDate3, endDate3),
            std::make_shared<DailyPrice>(200.00),
            std::make_shared<InsurancePrice>(50.00));

    allocateCarForMaintenance(car1);
    allocateCarForMaintenance(car2);
    allocateCarForMaintenance(car3);

    std::list<CarRentalAgreement> listaCarRentalAgreement;
    listaCarRentalAgreement.push_back(carRentalAgreement1);
    listaCarRentalAgreement.push_back(carRentalAgreement2);
    listaCarRentalAgreement.push_back(carRentalAgreement3);

    for (auto carRentalAgreement1 : listaCarRentalAgreement) {
        std::cout << "******************************************************************************************************" << std::endl;
        std::cout << "*************************************** Carro alugado ************************************************" << std::endl;
        std::cout << "******************************************************************************************************" << std::endl;
        std::cout << "Nº Contrato: " << carRentalAgreement1.getId() << std::endl;
        std::cout << "Cliente: " << carRentalAgreement1.getClient()->getPerson()->getName() << std::endl;
        std::cout << "Carro: " << carRentalAgreement1.getCar()->getModel() << std::endl;
        std::cout << "Data: " << std::endl;
        std::cout << "     " << carRentalAgreement1.getRentalPeriod()->getContractStartDate()->tm_mday << "/"<< carRentalAgreement1.getRentalPeriod()->getContractStartDate()->tm_mon<< "/"<< carRentalAgreement1.getRentalPeriod()->getContractStartDate()->tm_year;
        std::cout << " - " << carRentalAgreement1.getRentalPeriod()->getContractTerminationDate()->tm_mday << "/"<< carRentalAgreement1.getRentalPeriod()->getContractTerminationDate()->tm_mon<< "/"<< carRentalAgreement1.getRentalPeriod()->getContractTerminationDate()->tm_year<<std::endl;
        std::cout << "Diaria: R$ " << carRentalAgreement1.getDailyPrice()->getPrice() << std::endl;
        std::cout << "Total alugel: R$ " << carRentalAgreement1.calculateTotalValue() << std::endl;
        std::cout << "Tipo: " << carRentalAgreement1.getCarClassification()->getDescription() << std::endl;
        std::cout << "Seguro: R$ " << carRentalAgreement1.getInsurancePrice()->getPrice() << std::endl;
        std::cout << "------------------------------------------------------------------------------------------------------" << std::endl;
        std::cout << "------------------------------------------------------------------------------------------------------" << std::endl;
        std::cout << std::endl;
    }

    return 0;
}




