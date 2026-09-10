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


# POST
@app.post('/comp')
def create_comp(competiton : str):
    comp = []
    comp.append(competiton)

# GET
@app.get('/comp')
def list_comps():
    return comp