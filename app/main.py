from flask import Flask

# Create an instance of the Flask class. This instance will be our WSGI application.
app = Flask(__name__)

# Define the home route. This function will be called when the home page ('/') is accessed.
@app.route('/')
def home():
    # Return a simple message indicating the home page. This can be expanded into a full HTML page or a response from a database.
    return 'Welcome to our Flask Application!'

# Check if the script is run directly (not imported) and then start the Flask application.
if __name__ == '__main__':
    # Run the Flask app with debug mode on to auto-reload on changes and provide debug information.
    app.run(debug=True)