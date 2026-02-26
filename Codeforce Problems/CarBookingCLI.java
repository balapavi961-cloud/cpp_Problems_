import java.util.*; 
public class CarBookingCLI {
    public static void main(String[] args) {
        CarBookingSystem system = new CarBookingSystem();

        startCLI(system);
    }

    private static void startCLI(CarBookingSystem system) {
        Scanner scanner = new Scanner(System.in);
        boolean running = true;

        while (running) {
            System.out.println("Car Booking System");
            System.out.println("1. Book a Car");
            System.out.println("2. Cancel a Car");
            System.out.println("3. View Available Cars");
            System.out.println("4. Exit");

            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    bookCar(system);
                    break;
                case 2:
                    cancelCar(system);
                    break;
                case 3:
                    viewAvailableCars(system);
                    break;
                case 4:
                    running = false;
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }

        scanner.close();
    }

    private static void bookCar(CarBookingSystem system) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter car ID: ");
        int carId = scanner.nextInt();
        System.out.println("Enter driver's name: ");
        String driverName = scanner.nextLine();
        System.out.println("Enter start date: ");
        String startDate = scanner.nextLine();
        System.out.println("Enter end date: ");
        String endDate = scanner.nextLine();

        try {
            system.bookCar(carId, driverName, startDate, endDate);
            System.out.println("Car booked successfully!");
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

        scanner.close();
    }

    private static void cancelCar(CarBookingSystem system) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter car ID: ");
        int carId = scanner.nextInt();
        try {
            system.cancelCar(carId);
            System.out.println("Car canceled successfully!");
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

        scanner.close();
    }

    private static void viewAvailableCars(CarBookingSystem system) {
        List<Car> availableCars = system.getAvailableCars();
        if (availableCars.isEmpty()) {
            System.out.println("No cars available.");
        } else {
            System.out.println("Available Cars:");
            availableCars.forEach(car -> System.out.println(car));
        }
    }
}



public class CarBookingSystem {
    private List<Car> cars = new ArrayList<>();
    private List<Booking> bookings = new ArrayList<>();

    public CarBookingSystem() {
        cars.add(new Car(1, "Toyota Camry", "2023-01-01", "2023-01-05"));
        cars.add(new Car(2, "Ford Mustang", "2023-01-02", "2023-01-07"));
        cars.add(new Car(3, "Honda Civic", "2023-01-03", "2023-01-09"));
    }

    public void bookCar(int carId, String driverName, String startDate, String endDate) throws Exception {
        Car car = findCarById(carId);
        if (car == null) {
            throw new Exception("Car not found.");
        }

        Booking booking = new Booking(car, driverName, startDate, endDate);
        bookings.add(booking);
        car.bookedOn(booking);
    }

    public void cancelCar(int carId) throws Exception {
        Car car = findCarById(carId);
        if (car == null) {
            throw new Exception("Car not found.");
        }

        Booking booking = car.getLatestBooking();
        if (booking == null) {
            throw new Exception("No booking found for the car.");
        }

        bookings.remove(booking);
        car.unbookedOn(booking);
    }

    public List<Car> getAvailableCars() {
        return cars.stream()
                .filter(car -> car.getBookings().isEmpty())
                .collect(Collectors.toList());
    }

    private Car findCarById(int carId) {
        return cars.stream()
                .filter(car -> car.getId() == carId)
                .findFirst()
                .orElse(null);
    }
}



public class Car {
    private int id;
    private String make;
    private String model;
    private String startDate;
    private String endDate;
    private Set<Booking> bookings = new HashSet<>();

    public Car(int id, String make, String model, String startDate, String endDate) {
        this.id = id;
        this.make = make;
        this.model = model;
        this.startDate = startDate;
        this.endDate = endDate;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getMake() {
        return make;
    }

    public void setMake(String make) {
        this.make = make;
    }

    public String getModel() {
        return model;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public String getStartDate() {
        return startDate;
    }

    public void setStartDate(String startDate) {
        this.startDate = startDate;
    }

    public String getEndDate() {
        return endDate;
    }

    public void setEndDate(String endDate) {
        this.endDate = endDate;
    }

    public Set<Booking> getBookings() {
        return bookings;
    }

    public void bookOn(Booking booking) {
        bookings.add(booking);
    }

    public void unbookedOn(Booking booking) {
        bookings.remove(booking);
    }
}


public class Booking {
    private Car car;
    private String driverName;
    private String startDate;
    private String endDate;

    public Booking(Car car, String driverName, String startDate, String endDate) {
        this.car = car;
        this.driverName = driverName;
        this.startDate = startDate;
        this.endDate = endDate;
    }

    public Car getCar() {
        return car;
    }

    public void setCar(Car car) {
        this.car = car;
    }

    public String getDriverName() {
        return driverName;
    }

    public void setDriverName(String driverName) {
        this.driverName = driverName;
    }

    public String getStartDate() {
        return startDate;
    }

    public void setStartDate(String startDate) {
        this.startDate = startDate;
    }

    public String getEndDate() {
        return endDate;
    }

    public void setEndDate(String endDate) {
        this.endDate = endDate;
    }
}