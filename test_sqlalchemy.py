#!/usr/bin/env python3

import sqlalchemy
from sqlalchemy import create_engine
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy import Column, Integer, String
from sqlalchemy.orm import sessionmaker

engine = create_engine('mysql+mysqldb://dan:Dan13l181293.com@localhost/python_tutorial_db?charset=utf8mb4')

Base = declarative_base()

class User(Base):
    __tablename__ = 'users_custom'

    id = Column(Integer, primary_key=True)
    name = Column(String(30))
    fullname = Column(String(30))
    nickname = Column(String(30))

    def __repr__(self):
        return "<User(name='%s', fullname='%s', nickname='%s')>" % (
            self.name, self.fullname, self.nickname)

Base.metadata.create_all(engine)
Session = sessionmaker(bind=engine)
session = Session()

ed_user = User(name='ed', fullname='Ed Jones', nickname='edsnickname')
session.add(ed_user)
session.commit()

for instance in session.query(User).order_by(User.id):
    print(instance.name, instance.fullname)
