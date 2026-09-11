# Fast API Code basics
from fastapi import FastAPI, HTTPException
from pydantic import BaseModel

class comp(BaseModel):
    comp_name : str = '' 
    duration_days : int = 0 


app = FastAPI()

@app.get('/')
def root():
    return{'Hello':'World'}


# POST - Sends data to the server, often creating a new resource or triggering server-side changes. Not safe or idempotent; cacheable only under specific conditions.
@app.post('/add_comp')
def add_comp(add : comp):
#    comp.append(add)

@app.post('/comp')
def comp_add(competiton : str):
    comp = []
    comp.append(competiton)

# GET - etrieves a representation of a resource. It should not modify server state and is safe, idempotent, and cacheable.
@app.get('/comp')
def create_comp(competiton : comp):
    return(competiton)

@app.get('/comp')
def list_comps():
    return comp

# PUT - Replaces the entire resource with the provided data. Idempotent but not safe; invalidates caches.

# DELETE - Removes a resource. Idempotent but not safe; invalidates caches.

# HEAD - Same as GET but returns only headers, no body. Useful for checking metadata. Safe, idempotent, cacheable.

# PATCH – Partially updates a resource. Not safe or idempotent; can be cacheable if explicitly allowed.

# OPTIONS – Returns supported HTTP methods and communication options for a resource. Safe, idempotent.

# TRACE – Echoes the received request for diagnostic purposes. Safe, idempotent.

# CONNECT – Establishes a tunnel to the server, often for HTTPS over a proxy. Not safe or idempotent.