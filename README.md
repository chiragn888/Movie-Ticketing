
## Description
The Advanced Query Handler is a software tool designed to streamline the process of managing and executing complex database queries. It utilizes Flask for the backend, facilitating easy integration with web applications. Its main features include an intuitive interface for crafting queries, the ability to save frequently used queries, and comprehensive log tracking to monitor query performance.

## Setup Instructions

### Installing Python
1. Download Python from the official website: [Python Download](https://www.python.org/downloads/).
2. Follow the installation instructions for your operating system.
3. Ensure that Python and pip (Python's package installer) are added to your system's PATH.

### Setting Up a Virtual Environment
1. Open a terminal/command prompt.
2. Navigate to your project's directory using `cd path/to/your-project`.
3. Run `python -m venv venv` to create a virtual environment named `venv`.
4. Activate the virtual environment:
   - On Windows, run `venv\Scripts\activate.bat`.
   - On macOS/Linux, run `source venv/bin/activate`.

### Installing Dependencies
1. Ensure you are in your project’s root directory where the `requirements.txt` file is located.
2. Install the project dependencies by running `pip install -r requirements.txt`.

### Running the Application
1. Navigate to your project's root directory if not already there.
2. Run `python app.py` to start the Flask application. Ensure you have `app.py` or the entry file for your project correctly set up.

## Project Structure

- **app.py**: The entry point to the Flask application. Contains route definitions and initialization of the app.
- **requirements.txt**: Lists all the Python dependencies required for the project.
- **/templates**: Contains HTML templates for the application, used by Flask's Jinja2 template engine to dynamically generate pages.
- **/static**: Holds static files like CSS, JavaScript, and images used by the application.
- **/tests**: Contains test cases for the application's functionality, ensuring reliability and bug-free code.

## Running Tests

1. Ensure that `pytest` is installed. It is listed in `requirements.txt`, so following the setup instructions above should cover this.
2. Open a terminal/command prompt and navigate to your project's root directory.
3. Run `pytest` to execute all tests. Alternatively, you can run a specific test file by using `pytest path/to/test_file.py`.