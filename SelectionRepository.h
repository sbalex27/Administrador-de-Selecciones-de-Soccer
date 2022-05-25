#pragma once
#include "SelectionEntity.h"

using namespace System::Collections::Generic;


ref struct SelectionRepository abstract {
	/// <summary>
	/// Fetch and index all the results
	/// </summary>
	/// <returns>A collection of selection entities</returns>
	virtual Object^ index() abstract;

	/// <summary>
	/// Show an specified selection
	/// </summary>
	/// <param name="id">Selection find property</param>
	/// <returns>A instance of selection entity</returns>
	virtual SelectionEntity^ show(Int32^ id) abstract;

	/// <summary>
	/// Store a new resource in the storage
	/// </summary>
	/// <param name="selection">Entity to storage</param>
	virtual void store(SelectionEntity^ selection) abstract;

	/// <summary>
	/// Update the specified resource in the repository
	/// </summary>
	/// <param name="id">Selection find property</param>
	/// <param name="selection">A instance of selection entity</param>
	virtual void update(Int32^ id, SelectionEntity^ selection) abstract;

	/// <summary>
	/// Destroy the specified resource in the repository
	/// </summary>
	/// <param name="id">Selection find property</param>
	virtual void destroy(Int32^ id) abstract;
};